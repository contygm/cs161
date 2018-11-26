#include <iostream>
#include "GBoard.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //cout << "" << endl;

    GBoard myBoard;
    char move;
    gameState state;

    cout << "TEST 1: basic x and o" << endl;
    myBoard.makeMove(0, 0,'x');
    myBoard.makeMove(0, 1, 'o');
    state = myBoard.getGameState();
    cout << state << " :state of 3" << endl;

    myBoard.printBoard();


    cout << "TEST 2: Draw" << endl;
    
    // fill entire board, aleternating x and o
    for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
            if (row % 2 == 0 && col % 2 == 0)
			    myBoard.makeMove(row, col,'x');
            else if (row % 2 != 0 && col % 2 != 0)
                myBoard.makeMove(row, col,'x');
            else 
                myBoard.makeMove(row, col,'o');
		}
	}

    state = myBoard.getGameState();
    cout << state << " :state of 2" << endl;
    myBoard.printBoard();

    cout << "TEST 3: left diagonal and X_WON" << endl;

    for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
            if (row % 2 == 0 && col % 2 == 0)
			    myBoard.makeMove(row, col,'x');
            else if (row % 2 != 0 && col % 2 != 0)
                myBoard.makeMove(row, col,'x');
            else 
                myBoard.makeMove(row, col,'o');
		}
	}

    state = myBoard.getGameState();
    cout << state << " :state of 0" << endl;
    myBoard.printBoard();

    cout << "TEST 4: right diagonal and O_WON" << endl;

    state = myBoard.getGameState();
    cout << state << " :state of 1" << endl;
    myBoard.printBoard();

    // cout << "TEST 4: horizontal" << endl;

    // cout << "TEST 5: vertical" << endl;

    return 0;
};