#include <stdio.h>
#include "filter-head.h"
unsigned char SamplerArray[50];
unsigned char FilterCount[3];

void AmpClassifier(unsigned char sample){
    for(i=0;i<MAXSAMPCNT; i++){
        if(sample[i]>ZEROAMP){
            if(sample[i] < IDLEAMP){
                FilterCount[IDLEAMPCTR]++;
                continue;
            }
            else{
                FilterCount[ACTIVAMPCTR]++;
                continue;
            }
        }
        else{
            FilterCount[OFFAMPCTR]++;
        }
    }
}

StatStat stationStat(){
    if ()
    {
        /* code */
    }
    
}