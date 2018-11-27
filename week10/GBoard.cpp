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
	// cout << "win: " << won << endl;

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
	
	return true;
}

/********************************************************************* 
** Description: TODO: 
*********************************************************************/
bool GBoard::win(int row, int col, char move)
{
	int horizontalCount = 0; 
	int verticalCount = 0;
	int dL_Count = 0;
	int dR_Count = 0;

	// REMOVE:
	int count = 0;

	for (int i = 0; i < 15; i++)
	{
		// check horizontal
		if (board[row][i] == move && (board[row][(i+1)] == move || board[row][(i-1)] == move)) 
		{
			horizontalCount++;
		}

		// check vertical
		if (board[i][col] == move && (board[(i+1)][col] == move || board[(i-1)][col] == move)) 
		{
			verticalCount++;
		}

		// TODO: check left diagonal
		if (board[i][i] == move && (board[(i+1)][(i+1)] == move || board[(i-1)][(i-1)] == move)) 
		{
			dL_Count++;
		}

		// TODO: check right diagonal
		if (board[14-i][i] == move && (board[14-i][(i+1)] == move || board[14-i][(i-1)] == move)) 
		{
			dR_Count++;
		}

		// check if won
		if (horizontalCount == 5 || verticalCount == 5 || dL_Count == 5 || dR_Count == 5)
		{
			return true;
		}
		// REMOVE:
		count++;
	}
	
	// cout << verticalCount << " : " << row << " : " << count << endl;

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