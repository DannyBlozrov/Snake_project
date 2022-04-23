//
// Created by danny on 23/04/2022.
//

#ifndef SNAKE_CELL_H
#define SNAKE_CELL_H
#include <iostream>

class Cell {
    int x;
    int y;
    char Fill;
public:
    Cell():x(0),y(0),Fill(' '){}
    void printcell()const;
    friend class Board;
    bool isempty()const;


};


#endif //SNAKE_CELL_H
