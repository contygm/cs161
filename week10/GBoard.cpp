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
	int leftColStart = 0;
	int rightRowStart = 0;
	int rightColStart = 0;

	if(col >= row)
	{
		rightRowStart = col - row;
		rightColStart = row + col;
	} 
	else 
	{
		leftColStart = row - col;
		rightRowStart = row - col;
		rightColStart = 14;
	}

	// REMOVE:
	int count = 0;

	// TODO: bounds checking
	for (int i = 0; i < 15; i++)
	{
		int leftCol = leftColStart + i;
		int rightRow = rightRow + i;
		int rightCol = rightCol - i;
	
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

		// check left diagonal
		if (board[leftCol][i] == move && (board[leftCol+1][i+1] == move || board[leftCol-1][i-1] == move) && leftCol < 15) 
		{
			dL_Count++;
		}

		// TODO: check right diagonal
		// if (board[rightRow][rightCol] == move && (board[rightRow-i][rightRow+1] == move || board[rightRow+i][rightRow-1] == move)) 
		// {
		// 	dR_Count++;
		// }

		// check if won
		if (horizontalCount == 5 || verticalCount == 5 || dL_Count == 5 || dR_Count == 5)
		{
			return true;
		}
		
		// REMOVE:
		count++;
		// cout << dL_Count << " : " << leftCol << " : " << " : " << count << endl;

	}
	
	// cout << dR_Count << " : " << count << endl;

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