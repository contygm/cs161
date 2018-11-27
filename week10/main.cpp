#include <iostream>
#include "GBoard.hpp"
#include "basicTest.cpp"
// #include "drawTest.cpp"
// #include "diagonalTest.cpp"
// #include "horizontalTest.cpp"
// #include "verticalTest.cpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // GBoard myBoard;
    char move;
    bool correctState;

    //NOTE: TEST: basic x and o
    // myBoard.makeMove(0, 0,'x');
    // myBoard.makeMove(0, 1, 'o');
    // myBoard.printBoard();

    // correctState = (myBoard.getGameState() == UNFINISHED);
    // cout << correctState << " : game is unfinished" << endl;

    // NOTE: TEST: doesn't overwrite
    // myBoard.makeMove(0, 1, 'x');

    basicTest();

    //NOTE: Test: Draw
    // for(int row = 0; row < 15; row++)
	// {
	// 	for(int col = 0; col < 15; col++)
	// 	{
    //         if (row % 2 == 0 && col % 2 == 0)
	// 		    myBoard.makeMove(row, col,'x');
    //         else if (row % 2 != 0 && col % 2 != 0)
    //             myBoard.makeMove(row, col,'x');
    //         else 
    //             myBoard.makeMove(row, col,'o');
	// 	}
	// }
    // myBoard.printBoard();

    // correctState = (myBoard.getGameState() == DRAW);
    // cout << correctState << " : game is DRAW" << endl;

    // NOTE: TEST: left diagonal and X_WON
    
    // GBoard leftDiag;
    //     for(int row = 0; row < 15; row++)
	// {
    //     leftDiag.makeMove(row, row,'x');
	// }
    // leftDiag.printBoard();

    // correctState = (leftDiag.getGameState() == X_WON);
    // cout << correctState << " : diagnol and X_WON" << endl;

    // NOTE: TEST: right diagonal and O_WON
    
    GBoard rightDiag;
    for(int row = 14; row > -1; row--)
	{
        int col = (14 - row);
        rightDiag.makeMove(row, col,'o');
	}
    // rightDiag.printBoard();

    correctState = (rightDiag.getGameState() == O_WON);
    cout << correctState << " : diagnol and O_WON" << endl;

    // NOTE: TEST: horizontal win
    GBoard horizontal;

    for(int col = 0; col < 15; col++)
	{
        horizontal.makeMove(3, col,'o');
	}
    // horizontal.printBoard();

    correctState = (horizontal.getGameState() == O_WON);
    cout << correctState << " : horizontal win" << endl;

    // NOTE: TEST: vertical win
    GBoard vertical;

    for(int row = 0; row < 15; row++)
	{
        vertical.makeMove(row, 5,'x');
	}
    // vertical.printBoard();

    correctState = (vertical.getGameState() == X_WON);
    cout << correctState << " : vertical win" << endl;

    return 0;
};