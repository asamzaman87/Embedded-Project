// Librarys
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_CircuitPlayground.h>
// Pressure Sensor address 0x18 i2c
#define PRESS_ADDRESS 0x18
// Transfer Function constants
#define Pmax 300
#define Pmin 0
#define Out_Max 3774873
#define Out_Min 419430
// Color Constants
#define GREEN 0x002200
#define WHITE 0x222222
#define OFF 0x000000

float data[7];
float val[500];

void setup() {
  Wire.begin();
  Serial.begin(9600);
  CircuitPlayground.begin();
  while(!Serial);

  Serial.println("Welcome");
  Serial.println("Home Blood Pressure System");
  delay(3000);
}

float GetRealPressure(long Output_Pressure) {

  float num = (Output_Pressure-Out_Min)*(Pmax-Pmin);
  float dem = (Out_Max-Out_Min);
  float Pressure = num/dem;
  return Pressure;
  
}

long GetBytesFromPress(uint8_t Press_Address) {
  
  uint8_t StatusByte;
  Wire.beginTransmission(Press_Address);
  Wire.write(0xAA);
  Wire.write(0x00);
  Wire.write(0x00);
  Wire.endTransmission(false);
  Wire.requestFrom(Press_Address,4,true);   // Gives master 4 bytes
  if (Wire.available())      // Assume .read() gives 1 byte per read
    StatusByte = Wire.read();
    long ReturnByte1 = Wire.read();
    long ReturnByte2 = Wire.read();
    long ReturnByte3 = Wire.read();

  long ReturnPressure = ReturnByte3 | (ReturnByte2<<8) | (ReturnByte1<<16);
  return ReturnPressure;
}

void loop() {
  Serial.println("Pump to 150mm/hg");
  float Pressure1 = 0;
  int messageD = 0;
  int LEDnum = 0;
  while (Pressure1 < 150) {
    long RawPressure = GetBytesFromPress(PRESS_ADDRESS);
    Pressure1 = GetRealPressure(RawPressure);
    if (messageD%10 == 0) {
      Serial.println("Keep Pumping");
    }
    if ((Pressure1/150)*10 >= LEDnum) {
      CircuitPlayground.setPixelColor(LEDnum, WHITE);
      LEDnum += 1;
    }
    messageD += 1;
    delay(100);
  }

  for (int i = 0; i<10; i++) {
    CircuitPlayground.setPixelColor(i, GREEN);
  }
  Serial.println("Start To Open Valve");

  //START FILTERING SOLUTION FROM HERE!
  //REDEFINE DATA ARRAY: float data[7]; int val[500];
  for(int i=0; i<400; i++) {
    val[i] = -1;
  }
  int ind=0;
  int count=0;
  float diffCompare[2];
  bool first = true;
  bool second = false;
  const int MA = 7;
  while(Pressure1 > 30) {
    uint32_t RawPressure = GetBytesFromPress(PRESS_ADDRESS);
    Pressure1 = GetRealPressure(RawPressure);
    delay(10); //take data at 10 ms
    if(count%100==0){
      if(first){
        diffCompare[0] = Pressure1;
        first = false;
        second = true;
      }
      else if(second){
        diffCompare[1] = Pressure1;
        first = true;
        second = false;       
      }
    }
    float data_Press = Pressure1;
    data[ind]=data_Press;
    ind++;
    
    if(count % 200 == 0 && count != 0) { //every 2s
      float diff = diffCompare[1] - diffCompare[0];
      if((diff)>4.5)  
        Serial.println("Too Fast");
      else if((diff)<3.5)
        Serial.println("Too Low");
      else
        Serial.println("Optimum Value");
    }
    
    if(ind>=MA) { ind = 0;}
    if(count%MA==0 && count != 0) {
      float accum = 0;
      for(int i=0; i<MA; i++) {
        accum+=data[i];
      }
      accum /= (MA);
      float new_accum = accum;
      for(int x=0; x<400; x++) {//WE COULD INITIALIZE THE VALS TO BE -1 AND WHEREEVER WE DETECT THE FIRST -1 WE PUT THE ACCUM VAL THERE...
        if(val[x] == -1){
          //val[x] = new_accum;
          break;
        }
      }
      for(int i=0; i<MA; i++) {
        data[i]=-1; //we should clean it up for the if statement above this one...
      }
    }
    count+=1;
  }
  Serial.println("Pressure Array:"); //WHY ARE YOU PRINTING HERE??
  for(int ndx = 0; ndx < 500; ndx++) {
    Serial.println(val[ndx]);
  }
  Serial.println("Done");
  delay(60000);
}