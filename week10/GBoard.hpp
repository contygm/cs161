/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/29/2018
** Description:  Class declaration for GBoard class.  
**          	 TODO:
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
    bool win(char move);
    bool draw();

public:

    // default constructor
	GBoard();

    // getters
	gameState getGameState();

    /********************************************************************* 
    ** Description: TODO:
    *********************************************************************/
	bool makeMove(int row, int col, char player);

    // REMOVE: 	PRINT Board
    void printBoard();

};
#endif