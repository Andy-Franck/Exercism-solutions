#include "darts.h"


int score(coordinate_t  landing_position){
    double x_coord = landing_position.x;
    double y_coord = landing_position.y;

    double y_sqrt = y_coord * y_coord;
    double x_sqrt = x_coord * x_coord;
    double position = y_sqrt + x_sqrt;
    
    if(position > 100){
        return 0;
    }

    if(position <= 1){
        return 10;
    }
    if(position <= 25){
        return 5;
    }
    return 1;
}