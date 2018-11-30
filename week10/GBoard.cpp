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
	int leftColStart = 0;
	int rightRowStart = 0;
	int rightColStart = row + col;

	if (row > col)
	{
		leftColStart = row - col;
	}

	// TODO: bounds checking
	// for (int i = 0; i < 15; i++)
	// {
	// 	int leftCol = leftColStart + i;
	// 	int rightRow = rightRowStart + i;
	// 	int rightCol = rightColStart - i;
	
	// 	// check horizontal
	// 	if (board[row][i] == move && ((board[row][i+1] == move && board[row][i+2] == move) || (board[row][i-2] == move && board[row][i-1] == move))) 
	// 	{
	// 		horizontalCount++;
	// 	}

	// 	// check vertical
	// 	if (board[i][col] == move && (board[(i+1)][col] == move || board[(i-1)][col] == move)) 
	// 	{
	// 		verticalCount++;
	// 	}

	// 	// check if won
	// 	if (horizontalCount == 5 || verticalCount == 5)
	// 	{
	// 		return true;
	// 	}
	// }

	int left = 1;
	int right = 1;

	for (int i = 1; i < 6; i++)
	{
		// check left up diagonal
		if ( row-i < 15 && row-i >= 0 && col-i >= 0 && col-i < 15 && board[row-i][col-i] == move) 
		{
			left++;
		}

		// check left down diagonal
		if ( row+i < 15 && row+i >= 0 && col+i >= 0 && col+i < 15 && board[row+i][col+i] == move) 
		{
			left++;
		}

		// check right up diagonal
		if ( row-i < 15 && row-i >= 0 && col+i >= 0 && col+i < 15 && board[row-i][col+i] == move) 
		{
			right++;
		}

		// check right down diagonal
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