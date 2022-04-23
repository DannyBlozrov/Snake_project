//
// Created by danny on 23/04/2022.
//

#include "Cell.h"

void Cell::printcell() const {
    std::cout<<this->Fill;
}
bool Cell::isempty() const
{
    if(this->Fill!=' ')return false;
    return true;
}
