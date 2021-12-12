#include "lib.h"
float numMAX (const float num[], int dimensione){

    num [dimensione];
    float max = num[0];
    for(int i=0;i<dimensione ; i++){

        if (max<num[i]){
            max = num [i];
        }

    }
   return max;

}

