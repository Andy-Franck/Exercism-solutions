#include "raindrops.h"
#include <string.h>
#include <stdio.h>

void convert(char result[], int drops){
    *result = '\0';
    char* str = result;
    if(drops % 3 == 0){
        memcpy(str, "Pling", 5);
        str += 5;        
    }
    if(drops % 5 == 0){
        memcpy(str, "Plang", 5);
        str += 5;  
    }
    if(drops % 7 == 0){
         memcpy(str, "Plong", 5);
        str += 5;  
    }
    *str = '\0';
    if (!*result) 
      sprintf(result, "%d", drops);
}