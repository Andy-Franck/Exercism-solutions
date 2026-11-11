#include "eliuds_eggs.h"
#include<math.h>

unsigned int egg_count(unsigned int dec_num){
    int count = 0;
    while (dec_num > 0) {
        dec_num &= (dec_num - 1);
        count++;
    }
    return count;
}