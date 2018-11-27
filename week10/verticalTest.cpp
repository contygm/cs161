#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

// TODO: add in opposite moves
void verticalTest()
{
    GBoard board0;
    GBoard board1;
    GBoard board2;

    bool correctState;


    for(int row = 9; row < 15; row++)
	{
        board0.makeMove(row, 3,'o');
	}
    // board0.printBoard();

    correctState = (board0.getGameState() == O_WON);
    cout << correctState << " : vertical right win" << endl;

    for(int row = 0; row < 5; row++)
	{
        board1.makeMove(row, 14,'x');
	}
    // board1.printBoard();

    correctState = (board1.getGameState() == O_WON);
    cout << correctState << " : vertical left win" << endl;

    for(int row = 5; row < 10; row++)
	{
        board2.makeMove(row, 7,'x');
	}
    // board2.printBoard();

    correctState = (board2.getGameState() == O_WON);
    cout << correctState << " : vertical middle win" << endl;

}
