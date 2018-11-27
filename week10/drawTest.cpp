#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

// TODO: add in opposite moves
void drawTest()
{
    GBoard board; 
    bool correctState;   
    
    for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
            if (row % 2 == 0 && col % 2 == 0)
			    board.makeMove(row, col,'x');
            else if (row % 2 != 0 && col % 2 != 0)
                board.makeMove(row, col,'x');
            else 
                board.makeMove(row, col,'o');
		}
	}
    // board.printBoard();

    correctState = (board.getGameState() == DRAW);
    cout << correctState << " : game is DRAW" << endl;
}