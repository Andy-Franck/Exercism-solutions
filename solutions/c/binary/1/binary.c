#include "binary.h"
#include <stddef.h>
#include<string.h>
#include<math.h>
#include<stdio.h>

int convert(const char *input){ 
    size_t len = strlen(input);
    const char *p=input;
    int i=len-1;
    
    long int base_10 = 0;
    
    for(; *p!='\0' && i>=0;++p,--i){
        int p_number = *p - '0';
        if(p_number > 1) return INVALID;
        base_10 += p_number*pow(2,i);
    }
    return base_10;
}
