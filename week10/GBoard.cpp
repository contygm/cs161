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
    state = UNFINISHED;
	moveCount = 0;

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
	return state;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::makeMove(int row, int col, char move)
{
	if(board[row][col] != '-' || state != UNFINISHED)
		return false;
	
	// update board
	board[row][col] = move;
	moveCount++;

	// Check if win
	
	// Check if draw
	if (moveCount == 225)
	{
		state = DRAW;
	}
	
	return true;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::win(char move)
{
	// TODO: check horizontal
	// TODO: check diagonal
	if (board[0][0] == move )
	{

	}
	// TODO: check vertical
	return false;
}

// REMOVE: PRINT Board
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