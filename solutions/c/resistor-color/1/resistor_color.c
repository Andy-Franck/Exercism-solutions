#include "resistor_color.h"

resistor_band_t color_code(resistor_band_t code){
    return code;
}

resistor_band_t *colors(){
    static resistor_band_t colors_array[] = { BLACK, BROWN, RED,ORANGE, YELLOW,GREEN, BLUE, VIOLET, GREY, WHITE };
    return colors_array;
}


