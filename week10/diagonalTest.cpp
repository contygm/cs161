#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

void diagonalTest()
{
    GBoard board0;
    GBoard board1;
    GBoard board2;
    GBoard board3;

    bool correctState;

    // NOTE: LEFT 
    for(int row = 0; row < 5; row++)
	{
        board0.makeMove(row, row,'x');
	}
    // board0.printBoard();

    correctState = (board0.getGameState() == X_WON);
    cout << correctState << " : left diagonal top corner win" << endl;

    for(int row = 5; row < 10; row++)
	{
        board2.makeMove((row + 3), row, 'x');
	}
    // board2.printBoard();

    correctState = (board2.getGameState() == X_WON);
    cout << correctState << " : left diagonal middle" << endl;
    
    // NOTE: RIGHT
    for(int col = 14; col > 9; col--)
	{
        int row = (14 - col);
        board1.makeMove(row, col,'o');
	}
    // board1.printBoard();

    correctState = (board1.getGameState() == O_WON);
    cout << correctState << " : right diagonal top corner win" << endl;

    for(int col = 7; col > 2; col--)
	{
        int row = (13 - col);
        board3.makeMove(row, col,'o');
	}
    // board3.printBoard();

    correctState = (board3.getGameState() == O_WON);
    cout << correctState << " : right diagonal middle win" << endl;
    
}