// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h> 
#include<math.h>

int main() {
//FOR upto 500 DATA VALS...could be less but the remaining spaces would be filled with -1s
float val[500] = {145.64, 144.49, 143.56, 142.71, 142.17, 142.58, 142.54, 141.83, 140.97, 140.57, 140.19, 139.72, 139.24, 139.00, 138.73, 138.51, 139.31, 139.50, 139.00, 138.43, 138.04, 137.69, 137.29, 137.10, 136.87, 136.58, 136.20, 136.16, 136.73, 135.96, 134.64, 133.45, 132.27, 130.86, 129.47, 128.04, 126.59, 125.20, 123.99, 123.08, 123.00, 121.45, 119.86, 118.84, 117.84, 116.49, 115.30, 114.29, 113.20, 112.13, 111.30, 111.62, 110.87, 109.77, 108.70, 107.50, 106.24, 104.95, 104.01, 103.20, 102.22, 101.39, 102.20, 101.87, 100.78, 99.65, 98.70, 97.73, 96.61, 95.55, 94.71, 93.68, 93.08, 93.61, 93.19, 92.16, 91.19, 90.36, 89.55, 88.73, 87.94, 87.40, 86.63, 86.44, 86.59, 85.64, 84.56, 83.74, 82.90, 81.84, 81.00, 80.13, 79.50, 78.63, 78.62, 77.99, 77.31, 76.49, 75.87, 75.17, 74.51, 74.00, 73.43, 72.88, 72.66, 72.53, 71.94, 71.30, 70.73, 70.19, 69.52, 69.04, 68.49, 68.14, 67.86, 68.04, 67.75, 67.50, 67.18, 66.78, 66.44, 66.06, 65.79, 65.38, 65.06, 64.85, 64.83, 64.40, 64.01, 63.73, 63.40, 63.00, 62.61, 62.34, 62.00, 61.71, 61.69, 61.34, 61.00, 60.72, 60.26, 60.00, 59.57, 59.34, 58.89, 58.71, 58.66, 58.41, 58.06, 57.72, 57.39, 57.05, 56.69, 56.46, 56.16, 55.89, 55.89, 55.71, 55.37, 55.07, 54.77, 54.73, 55.35, 55.05, 54.56, 54.06, 53.55, 53.54, 53.16, 52.83, 52.52, 52.22, 51.88, 51.56, 51.34, 51.07, 50.76, 50.47, 50.30, 50.27, 50.03, 49.70, 49.42, 49.22, 48.86, 48.58, 48.31, 48.08, 47.85, 47.55, 47.37, 47.42, 47.10, 46.81, 46.64, 46.40, 46.08, 45.87, 45.63, 45.41, 45.19, 44.90, 44.80, 44.80, 44.48, 44.23, 44.05, 43.83, 43.63, 43.53, 43.34, 43.24, 42.99, 42.81, 42.92, 42.87, 42.70, 42.58, 42.48, 42.23, 42.05, 41.94, 41.82, 41.44, 41.33, 41.23, 41.40, 41.25, 41.06, 41.05, 40.95, 40.75, 40.49, 40.46, 40.30, 40.07, 39.89, 39.73, 39.77, 39.73, 39.63, 39.52, 39.33, 39.15, 39.09, 39.08, 39.02, 38.98, 38.76, 38.64, 38.67, 38.58, 38.37, 38.26, 38.10, 37.87, 37.75, 37.59, 37.48, 37.39, 37.22, 37.18, 37.23, 37.07, 36.93, 36.82, 36.67, 36.45, 36.37, 36.23, 36.12, 36.08, 35.85, 36.01, 36.06, 36.11, 35.96, 35.99, 35.89, 35.94, 35.67, 35.59, 35.53, 35.52, 35.42, 35.71, 35.45, 35.46, 35.49, 35.42, 35.33, 35.33, 35.27, 35.12, 35.05, 34.92, 35.03, 34.97, 34.82, 34.58, 34.32, 34.02, 33.70, 33.42, 33.19, 32.97, 32.72, 32.52, 32.48, 32.34, 32.09, 31.95, 31.79, 31.65, 31.40, 31.25, 31.06, 30.94, 30.76, 30.74, 30.70, 30.53, 30.51, 30.48, 30.36, 30.28, 30.20, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00};

int indexes[500]; 
for(int i=0;i<500;i++)
    indexes[i]=-1;
for(int i=1;i<499;i++){
    int before = i-1;
    int after = i+1; 
    if(val[i]>150){
        continue;
    }
    if(val[i]==-1.0 || val[after]==-1.0){
        break;
    }	
    if(val[before]<val[i] && val[i]>val[after]){
        for(int ndx=0;ndx<500;ndx++)
            if(indexes[ndx]==-1){
                indexes[ndx] = i;
                break;
            }
}
}
// for(int ndx=0;ndx<400;ndx++){
//     if (indexes[ndx]!=-1){
//         printf("NDX");
//         printf("%d\n",indexes[ndx]);
// }
// }

// //AFTER WE HAVE ALL THE PEAKS.......
int peakCount = 0; //to check if the pairs arr. is full
int pairs[2];//takes every 2 values from indexes arr.
float AVG[250];//stores the pulses
float diff; //the pulse

float greatest = 0;//to get the maxPulseNdx
int maxPulseNdx = -1;
int peakNdx = -1;//to see where in the AVG is the highest pulse
bool avgCheck = false; //break after adding an elem in AVG
int avgTracker[250]; //to relate back to a pressure value ndx after we find the difference that has the biggest difference from the avg difference...

for(int i=0;i<2;i++)
    pairs[i]=0;
for(int i=0;i<250;i++){
    AVG[i]=-1.0; 
    avgTracker[i]=-1; }

// //For every 2 peaks get the diff and put it in the diff array...

for(int i=0;i<500;i++){
    if(indexes[i]!=-1){
        peakCount += 1;
        pairs[peakCount-1]=indexes[i];
    }
    if(peakCount==2){
        peakCount = 1;
        // printf("%d\n",pairs[0]);
        // printf("%d",pairs[1]);
        // break;
        diff = (pairs[1] - pairs[0]) * 0.05; //confirm if its actually 0.05!
        if(diff==0){
            break;
        }
        // printf("%f\n",val[pairs[1]]);
        // printf("%f\n",val[pairs[2]]);
        for(int y=0;y<250;y++){
                if(avgTracker[y]==-1){
                    avgTracker[y] = pairs[0];
                    if (indexes[i+1]==-1){
                        avgTracker[y+1] = pairs[1];
                    }
                    break;
                }
            }
            
        if(diff>greatest){
            greatest = diff;
            maxPulseNdx = pairs[1]; //ndx for the pressure that causes max osscilation!
        }
        for(int y=0;y<250;y++){
            if(AVG[y]==-1.0){
                AVG[y] = diff; //each elem would be the difference of the peaks, etc.
                if(AVG[y]==greatest){
                     peakNdx = y; //where the maxPeak is within AVG
                 }
                 break;
            }  
        }
}

        if(peakCount==1){
            if((i-1)!=-1){
                pairs[0] = pairs[1];
            }
        }
        
}

// printf("%d\n",peakNdx);

// for(int y=0;y<150;y++){
//     if(AVG[y] != -1){
//         printf("%f\n",AVG[y]);}
// }
// printf("Peak Ndx\n");
// printf("%d\n",peakNdx);// AVG arr
// printf("Pressure index at val arr. that causes Max HeartRate\n");
// printf("%d\n",maxPulseNdx); //val arr
// printf("%f",val[maxPulseNdx]);
// //Now that we have all the averages in the AVG array....we can average to get heart rate!
// float avg = 0;
// int avgCount = 0;
// for(int y=0;y<250;y++){
//     if(AVG[y]!=-1){
//         // printf("%f\n",AVG[y]);
//         avgCount += 1;
//         avg += AVG[y];
//     } 
// }
//printf("%f",60*avg/avgCount); //prints heartrate...per minute...


//Systolic Measurement: We already have the peak osscilation's ndx: maxPulseNdx for the val arr. and peakNdx for the AVGarr.
float osciDiff[150]; //store pair differences...
int osciCount = 0; //for averaging v
float osciAvg = 0;
for(int i=0;i<150;i++)
	osciDiff[i]=500.0; //max heartbeat won't ever go to 500....

if(peakNdx!=0){
for(int ndx=0;ndx<(peakNdx);ndx++){
    int after = ndx+1;
	for(int i=0;i<(150);i++){
		if(osciDiff[i]==500.0){
			osciDiff[i] = fabs(AVG[ndx]-AVG[after]); //HAVE TO PUT: <include math.h>
// 			printf("%f\n",osciDiff[i]);
			break;
		}
	}
}
}
else{
    osciDiff[0] = AVG[peakNdx];
}

//Now lets average the differences between oscillations...
for(int i=0;i<(150);i++){
	if(osciDiff[i]!=500.0){
		osciCount += 1;
		osciAvg += osciDiff[i];
	}
}
osciAvg = osciAvg/osciCount;
//printf("%f\n",osciAvg);

//Now we can go through to see which of the differences have the biggest difference from the average...

int valNdx;
int avgNdx;
float greatDiff = 0;
if(peakNdx!=0){
for(int ndx=0;ndx<(peakNdx);ndx++){
	int after = ndx + 1;
	float difference = fabs(AVG[ndx]-AVG[after]); //HAVE TO PUT: <include math.h>
	if(difference>=osciAvg && difference>greatDiff){
	   greatDiff = difference;
	    valNdx = avgTracker[ndx+1]; //gives us the val ndx for the systolic pressure!
		avgNdx = ndx+1;
// 		printf("%d\n",valNdx);
	}
}
}
else{
    // printf("yo");
    avgNdx = 0;
    valNdx = avgTracker[0];
}
// printf("AVERAGE TRACKER\n");
// for(int ndx=0;ndx<(250);ndx++){
//     if(avgTracker[ndx]!=-1){
//         printf("%d\n",avgTracker[ndx]);
//     }
    
// }
    
printf("Systolic Value: %f\n",val[valNdx]);//systolic
//We know dystolic pressure has the same pressure difference with the highest osscilation...
float highestOsci = val[maxPulseNdx];
float diffOsci = val[valNdx] - val[maxPulseNdx];
// printf("%f",(val[maxPulseNdx]+diffOsci));
float dystolic = val[maxPulseNdx]-diffOsci;
// printf("%f\n",val[maxPulseNdx]);
printf("Dystolic Value: %f\n",dystolic);//prints dystolic pressure
int dystNdx =-1;
int peakAvg =-1;
for(int ndx=0;ndx<500;ndx++){
    if((val[maxPulseNdx]-val[indexes[ndx]])==0){
        peakAvg = ndx;
    } //valNdx has to be a peak! Since we get the ndx from avgTracker which is the same as indexes.
}
//Once we know the dystolic and systolic pressures, we calculated the average distance between the peaks of the systolic and dystolic pressures. If the dystolic pressure was below 30 then we used the average distance of the peaks between the systolic and the max heartbeat pressure to get heartrate.
for(int ndx=0;ndx<500;ndx++){
    if(fabs(dystolic-val[indexes[ndx]])<1.5){
        dystNdx = ndx;
    } //valNdx has to be a peak! Since we get the ndx from avgTracker which is the same as indexes.
}
int capNdx;
if(dystNdx!=-1 && AVG[dystNdx]!=-1){
    capNdx = dystNdx;
}
else{
    capNdx = peakAvg;
}


float avg = 0;
float avgCount = 0;

// printf("Peak Avg: %d\n",peakAvg);
// printf("Systolic Avg: %d\n",avgNdx);
for(int ndx=avgNdx;ndx<capNdx+1;ndx++){ 
    if(AVG[ndx]!=-1){
        // printf("%f\n",AVG[y]);
         avgCount += 1;
         avg += AVG[ndx];
    } 
}
float heartRate = 0;
heartRate = 60*avg/avgCount;
printf("HeartRate Value: %f\n",heartRate);
}