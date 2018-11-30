/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/29/2018
** Description:  Class declaration for GBoard class.
**          	 
*******************************************************************************/ 

#ifndef GBOARD_HPP
#define GBOARD_HPP

enum gameState {X_WON, O_WON, DRAW, UNFINISHED};

class GBoard
{
private:
	char board[15][15];
	gameState state;
    int moveCount;
    /********************************************************************* 
    ** Description: Check if move results in a win. Checks vertically, 
    ** 				horizontally and diagonally.
    *********************************************************************/
    bool win(int row, int col, char move);

public:

    // default constructor
	GBoard();

    // getters
	gameState getGameState();

    /********************************************************************* 
    ** Description: Make moves based on user input. Takes row (int), 
    **				column(int), and user's move (char) of 'x' or 'o'.
    *********************************************************************/
	bool makeMove(int row, int col, char player);

    // REMOVE: 	PRINT Board
    void printBoard();

};
#endif