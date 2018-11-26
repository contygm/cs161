/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/29/2018
** Description:  Implementation for GBoard class.  
**          	 TODO:
*******************************************************************************/

#include "GBoard.hpp"

// REMOVE:
#include <iostream>
using std::cout;
using std::endl;

// default constructor
GBoard::GBoard()
{
    gameState stateOfGame = UNFINISHED;

    // REVIEW: try range-based loop or get ride of double for loop
    for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
			board[row][col] = '-';
		}
	}
}

// getters
gameState GBoard::getGameState()
{
	return progress;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::makeMove(int row, int col, char move)
{
	if(board[row][col] != '-' || progress != UNFINISHED)
		return false;
	
	board[row][col] = move;

	// Check if win
	// check if draw
	// set progress

	return true;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::win()
{
	// TODO: check horizontal
	// TODO: check diagonal
	// TODO: check vertical
	return false;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::draw()
{
	// TODO: check if draw
	return false;
}

// REMOVE: 	PRINT Board
void GBoard::printBoard()
{
	for(int row = 0; row < 15; row++)
	{
		for(int col = 0; col < 15; col++)
		{
			cout << board[row][col] << " ";
		}
		cout << endl;
	}
}