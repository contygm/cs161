/******************************************************************************* 
** Author:       Genevieve Conty
** Date:         11/29/2018
** Description:  Implementation for GBoard class. Build initial board, make 
**          	 moves, and check who wins. 
*******************************************************************************/

#include "GBoard.hpp"

// REMOVE:
#include <iostream>
using std::cout;
using std::endl;

// default constructor
GBoard::GBoard()
{
	// set defaults
    state = UNFINISHED;
	moveCount = 0;

	// board with '-' as placeholder
    for(int i = 0; i < 15; i++)
	{
		board[i][i] = '-';
	}
}

// getters
gameState GBoard::getGameState()
{
	return state;
}

/********************************************************************* 
** Description: Make moves based on user input. Takes row (int), 
**				column(int), and user's move (char) of 'x' or 'o'.
*********************************************************************/
bool GBoard::makeMove(int row, int col, char move)
{
	// default
	bool won = false;
	
	// check if space is taken or game over
	if(board[row][col] != '-' || state != UNFINISHED)
		return false;
	
	// update board
	board[row][col] = move;
	moveCount++;

	// Check if win
	won = win(row, col, move);

	// check who won
	if (won && move == 'x')
	{
		state = X_WON;
	}
	else if (won && move == 'o')
	{
		state = O_WON;
	}
	// Check if draw
	else if (moveCount == 225)
	{
		state = DRAW;
	}

	return true;
}

/********************************************************************* 
** Description: check if move results in a win. Checks vertically, 
** 				horizontally and diagonally.
*********************************************************************/
bool GBoard::win(int row, int col, char move)
{
	int horizontalCount = 0; 
	int verticalCount = 0;

	for (int i = 0; i < 15; i++)
	{
	
		// check horizontal
		if (board[row][i] == move) 
			horizontalCount++;
		else
			horizontalCount = 0;

		// check vertical
		if (board[i][col] == move) 
			verticalCount++;
		else
			verticalCount = 0;

		// check if won
		if (horizontalCount == 5 || verticalCount == 5)
			return true;
	}

	// check diagonals
	int leftD = 1;
	int rightD = 1;

	for (int i = 1; i < 5; i++)
	{
		// check left up
		if (row-i < 15 && row-i >= 0 && 
			col-i >= 0 && col-i < 15 && 
			board[row-i][col-i] == move) 
		{
			leftD++;
		}

		// check left down
		if (row+i < 15 && row+i >= 0 && 
			col+i >= 0 && col+i < 15 && 
			board[row+i][col+i] == move) 
		{
			leftD++;
		}

		// check right up
		if (row-i < 15 && row-i >= 0 && 
			col+i >= 0 && col+i < 15 && 
			board[row-i][col+i] == move) 
		{
			rightD++;
		}

		// check right down
		if (row+i < 15 && row+i >= 0 && 
			col-i >= 0 && col-i < 15 && 
			board[row+i][col-i] == move) 
		{
			rightD++;
		}

		// check if won
		if ( leftD == 5 || rightD == 5) 
			return true;
	} 
	
	return false;
}

// REMOVE: 
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