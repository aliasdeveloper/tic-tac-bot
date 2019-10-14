#include <iostream>
#include <cstdlib>
#include "lib/Board.h"

using namespace std;
int main(){
    Board board;
    board.printBoard();
    board.board[0][0] = 'X';
    board.board[0][1] = 'X';
    board.board[0][2] = 'X';
    board.board[1][1] = 'O';
    board.board[2][2] = 'O';
    board.printBoard();
}

// #include "TicTacToe.h"
// #include "CpuPlayer.h"

// int main(){
//     // initialize game classes
//     TicTacToe game;
//     CpuPlayer opponent;
//     string playerMove, cpuMove;
//     while(game.over == false){
//         playerMove = promptPlayerMove();
//         while(!isValid(playerMove)){
//             cout << "Invalid input. " << endl;
//             playerMove = promptPlayerMove;
//         }
//         game.makePlayerMove(playerMove);
//         game.checkForEnd();
//         cpuMove = opponent.selectMove(game.board)
//         game.makeCpuMove(cpuMove);
//         game.checkForEnd();
//         game.printBoard();
//     }
// }
/*
        if(decide == 0){
            game.playerMove();
            if(game.playerVictory){
                cout << "Congratulations, you win!" << endl;
                break;
            }
            game.cpuMove();
            if(game.cpuVictory){
                cout << "Sorry, you lose." << endl;
                break;
            }
        } else {
            game.cpuMove();
            if(game.cpuVictory){
                cout << "Sorry, you lose." << endl;
                break;
            }
            game.playerMove();
            if(game.playerVictory){
                cout << "Congratulations, you win!" << endl;
                break;
            }
        }
*/