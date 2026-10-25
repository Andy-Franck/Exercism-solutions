#include "grains.h"
#include<stdio.h>

uint64_t square(uint8_t index){
    double res = 0.5;
    for(int i=1; i<=index; i++){
        res = res * 2;
    }
    
    return res;
}
uint64_t total(void){
    int res = 1;
    for(int i=1; i<=65; i++){
        res = res * 2;
    }
    printf("the result is %d",res);
    return res - 1;
}