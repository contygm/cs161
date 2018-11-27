#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

// TODO: add in opposite moves
void horizontalTest()
{
    GBoard board0;
    GBoard board1;
    GBoard board2;

    bool correctState;


    for(int col = 9; col < 15; col++)
	{
        board0.makeMove(0, col,'o');
	}
    // board0.printBoard();

    correctState = (board0.getGameState() == O_WON);
    cout << correctState << " : horizontal right win" << endl;

    for(int col = 0; col < 5; col++)
	{
        board1.makeMove(14, col,'x');
	}
    // board1.printBoard();

    correctState = (board1.getGameState() == O_WON);
    cout << correctState << " : horizontal left win" << endl;

    for(int col = 5; col < 10; col++)
	{
        board2.makeMove(7, col,'x');
	}
    // board2.printBoard();

    correctState = (board2.getGameState() == O_WON);
    cout << correctState << " : horizontal middle win" << endl;

}