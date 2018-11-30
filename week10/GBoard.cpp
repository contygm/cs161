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
	bool won = false;
	
	if(board[row][col] != '-' || state != UNFINISHED)
		return false;
	
	// update board
	board[row][col] = move;
	moveCount++;

	// Check if win
	won = win(row, col, move);

	// REMOVE:
	// cout << "win: " << won << " : " << move << " : " << state << endl;

	// check if x won
	if (won && move == 'x')
	{
		state = X_WON;
	}
	// check if o won
	else if (won && move == 'o')
	{
		state = O_WON;
	}
	// Check if draw
	else if (moveCount == 225)
	{
		state = DRAW;
	}

	// cout << "win: " << won << " : " << move << " : " << state << endl;

	return true;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::win(int row, int col, char move)
{
	int horizontalCount = 0; 
	int verticalCount = 0;

	// TODO: bounds checking
	for (int i = 0; i < 15; i++)
	{
	
		// check horizontal
		if (board[row][i] == move) 
		{
			horizontalCount++;
		} else {
			horizontalCount = 0;
		}

		// check vertical
		if (board[i][col] == move) 
		{
			verticalCount++;
		} else {
			verticalCount = 0;
		}

		// check if won
		if (horizontalCount == 5 || verticalCount == 5)
		{
			return true;
		}
	}

	// check diagonals
	int left = 1;
	int right = 1;

	for (int i = 1; i < 5; i++)
	{
		// check left up
		if ( row-i < 15 && row-i >= 0 && col-i >= 0 && col-i < 15 && board[row-i][col-i] == move) 
		{
			left++;
		}

		// check left down
		if ( row+i < 15 && row+i >= 0 && col+i >= 0 && col+i < 15 && board[row+i][col+i] == move) 
		{
			left++;
		}

		// check right up
		if ( row-i < 15 && row-i >= 0 && col+i >= 0 && col+i < 15 && board[row-i][col+i] == move) 
		{
			right++;
		}

		// check right down
		// TODO: two sided inequality
		if ( row+i < 15 && row+i >= 0 && col-i >= 0 && col-i < 15 && board[row+i][col-i] == move) 
		{
			right++;
		}

		if ( left == 5 || right == 5) 
		{
			return true;
		}
	} 
	
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