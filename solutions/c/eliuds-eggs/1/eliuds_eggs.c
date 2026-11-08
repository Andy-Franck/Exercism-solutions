#include "eliuds_eggs.h"
#include<math.h>

int egg_count(int egg){
    int total_egg=0;
    int count = egg;
    while(count != 0){
        total_egg += (count % 2);
        count >>= 1;
    }
    return total_egg;
}
