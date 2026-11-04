#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    int count=0;
    for(int i=0; *(lhs+i) != '\0' || *(rhs+i) != '\0'; ++i){
        
        if(*(lhs+i) != *(rhs+i)) ++count;
        
        if((*(rhs +i) == 0 && *(lhs+i) != 0) || (*(lhs +i)== 0 && *(rhs+i) != 0)) return -1;
    }
    return count;
}