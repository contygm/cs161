#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

// TODO: add in opposite moves
void basicTest()
{
    GBoard myBoard;
    char move;
    bool correctState;

    myBoard.makeMove(0, 0,'x');
    myBoard.makeMove(0, 1, 'o');
    // myBoard.printBoard();

    correctState = (myBoard.getGameState() == UNFINISHED);
    cout << correctState << " : game is unfinished" << endl;

    myBoard.makeMove(0, 1, 'x');

    cout << !myBoard.makeMove(0, 1, 'x') << " : doesn't override x" << endl;
    cout << !myBoard.makeMove(0, 0, 'o') << " : doesn't override o" << endl;

}