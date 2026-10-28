#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    /* checking if the queen is on the board*/ 
    if (queen_1.row >= 8 || queen_1.column >= 8 || queen_2.row >= 8 || queen_2.column >= 8){
        return INVALID_POSITION;
    }
    
    /* checking if the queens are on the same square*/ 
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) return INVALID_POSITION;

    
    int difference_rows = queen_1.row - queen_2.row;
    int difference_columns = queen_1.column - queen_2.column;
    
    /* I prefer positive differences*/ 
    difference_rows = difference_rows > 0 ? difference_rows : 0-difference_rows;
    difference_columns = difference_columns > 0 ? difference_columns : 0-difference_columns;
    
    /* checking if the queens are on the same diagonal*/ 
    if (difference_columns == difference_rows || difference_rows == 0 || difference_columns == 0){
        return CAN_ATTACK;
    }
    return CAN_NOT_ATTACK;
}
