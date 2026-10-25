#include "leap.h"
#include "stdbool.h"

bool leap_year(int year){
    if(!(year % 4)){
        if(!(year % 100)){
            if(!(year % 400)){
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}