#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

// TODO: add in opposite moves
void diagonalTest()
{
    GBoard board0;
    GBoard board1;
    GBoard board2;

    bool correctState;

    for(int row = 0; row < 5; row++)
	{
        board0.makeMove(row, row,'x');
	}
    // board0.printBoard();

    correctState = (board0.getGameState() == X_WON);
    cout << correctState << " : diagnol left win" << endl;
    
    for(int col = 14; col > 9; col--)
	{
        int row = (14 - col);
        board1.makeMove(row, col,'o');
	}
    // board1.printBoard();

    correctState = (board1.getGameState() == O_WON);
    cout << correctState << " : diagnol right win" << endl;

    for(int row = 5; row < 10; row++)
	{
        board2.makeMove(row, row,'x');
	}
    // board2.printBoard();

    correctState = (board2.getGameState() == O_WON);
    cout << correctState << " : diagnol middle win" << endl;
}