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

    int even[15] = {'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o','x', 'x', 'x', 'x', 'o', 'o','o'};
    int odd[15] = {'o', 'o', 'o', 'o', 'x', 'x', 'x', 'x', 'o', 'o', 'o', 'o','x', 'x', 'x'};


    for(int row = 0; row < 15; row++)
	{
        if (row % 2 == 0){
            for(int col = 0; col < 15; col++)
            {
                count++;
                board.makeMove(row, col, even[col]);
            } 
        } else {
            for(int col = 0; col < 15; col++)
            {
                count++;
                board.makeMove(row, col, odd[col]);
            }
        }
	}
    board.printBoard();

    correctState = (board.getGameState() == DRAW) && (count == 225);
    cout << correctState << " : game is DRAW" << endl;
}