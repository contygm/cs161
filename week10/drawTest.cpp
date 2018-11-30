#include <iostream>
#include "GBoard.hpp"
using std::cout;
using std::cin;
using std::endl;

void drawTest()
{
    GBoard board; 
    bool correctState;   

    int count = 0;
    
    for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
            if (row % 2 == 0 && col % 4 == 0)
            {
                count++;
                board.makeMove(row, col,'x');
                board.makeMove(row, col+1,'x');
            }
			    
            else if (row % 2 != 0 && col % 6 == 0)
            {
                count++;
                board.makeMove(row, col,'x');
                board.makeMove(row, col+1,'x');
                board.makeMove(row, col+2,'x');
            }
            else 
            {
                board.makeMove(row, col,'o');
                count++;
            }
		}
	}
    // board.printBoard();

    correctState = (board.getGameState() == DRAW) && (count == 225);
    cout << correctState << " : game is DRAW" << endl;
}