//
// Created by danny on 23/04/2022.
//

#ifndef SNAKE_BOARD_H
#define SNAKE_BOARD_H
#define board_size 10

#include "Cell.h"
#include <iostream>

class Board
        {
    Cell** board;


        public:
    Board();
    ~Board();
    void printboard()const;






        };



#endif //SNAKE_BOARD_H
