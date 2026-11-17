#include "perfect_numbers.h"
#include<stdio.h>


kind classify_number(int num){
    if(num <= 0) return ERROR;
    if(num == 1) return DEFICIENT_NUMBER;

    int sum = 1, n = num;
    int i=2;

    while( i<= num/2){
        if(n%i == 0){ 
            sum+=i;
            
        }

        i++;
    }

    printf("%d =>%d",num,sum);

    if(sum == num)return PERFECT_NUMBER;
    else if(sum > num) return ABUNDANT_NUMBER;
    else return DEFICIENT_NUMBER;


}
