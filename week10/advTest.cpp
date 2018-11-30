#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

void advTest()
{
    GBoard board0;
    GBoard board1;
    GBoard board2;
    GBoard board3;
    
    bool correctState;

    // NOTE: mulitple right diagonals w other moves

    // NOTE: multiple left diagonals

    board2.makeMove(8, 5,'x');
    board2.makeMove(4, 4,'o');
    board2.makeMove(9, 3,'x');
    board2.makeMove(2, 2,'o');
    board2.makeMove(9, 6,'x');
    board2.makeMove(1, 1,'o');
    board2.makeMove(10, 7,'x');
    board2.makeMove(3, 3,'o');
    board2.makeMove(11, 8,'x');
    board2.makeMove(0, 0,'o');
    board2.makeMove(12, 9,'x');
    
    // board2.printBoard();
    correctState = (board2.getGameState() == O_WON);
    cout << correctState << " : left diagonal multiple" << endl;
    
    // NOTE: multiple verticals

    // NOTE: multiple horizontal

}