#ifndef _board_h_
#define _board_h_

#include <iostream>

using namespace std;
class Board{
    public:
        Board();
        char board[3][3];
        void printBoard();
};

#endif