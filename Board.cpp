//
// Created by danny on 23/04/2022->
//

#include "Board.h"
Board::Board()
{
    board = new Cell*[board_size];
    {
        for (int i = 0; i <board_size; i++)
            board[i] = new Cell[board_size];
    }
    for(int i=0;i<board_size;i++) // first row
    {
        board[i][0].x=i;
        board[i][0].y=0;
        board[i][0].Fill='_';

    }
    for(int i=0;i<board_size;i++) //first column
    {
        board[0][i].x=0;
        board[0][i].y=i;
        board[0][i].Fill='|';

    }
    for(int i=0;i<board_size;i++) // last column
    {
        board[board_size-1][i].x=board_size-1;
        board[board_size-1][i].y=i;
        board[board_size-1][i].Fill='|';
    }
    for(int i=0;i<board_size;i++) // last row
    {
        board[i][board_size-1].x=i;
        board[i][board_size-1].y=board_size-1;
        board[i][board_size-1].Fill='_';

    }
    for(int i=1;i<board_size-1;i++)
    {
        for(int j=1;j<board_size-1;j++)
        {
            board[i][j].x = i;
            board[i][j].y = j;
            board[i][j].Fill = ' ';
        }
    }

    board[4][5].Fill='R';



}
Board::~Board()
{
    for(int i=0;i<board_size;i++)
    {
        delete board[i];
    }
    delete board;
}

void Board::printboard() const
{
    for(int j=0;j<board_size;j++)
    {
        for(int i=0;i<board_size;i++)
        {
            board[i][j].printcell();

        }
        std::cout<<std::endl;
    }

}