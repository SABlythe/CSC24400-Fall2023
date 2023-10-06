#include <iostream>
using namespace std;

#include "Queensolver.hpp"


#define QUEEN 'Q'
#define EMPTY ' '


void printRowHeader(int);
bool solveBoard(int, int);

bool canPlace(int intoRow, int intoCol, char board[][SIZE])
{
	// check same row
	for (int colCheck = intoCol - 1; colCheck >= 0; colCheck--)
		if (board[intoRow][colCheck] == QUEEN)
			return false;

	// check UL diagonal
	int colCheck = intoCol - 1,
		rowCheck = intoRow - 1;

	while (colCheck >= 0 && rowCheck >= 0)
	{
		if (board[rowCheck][colCheck] == QUEEN)
			return false;

		rowCheck--;
		colCheck--;
	}


	// check LL diagonal
	colCheck = intoCol - 1,
		rowCheck = intoRow + 1;

	while (colCheck >= 0 && rowCheck < SIZE)
	{
		if (board[rowCheck][colCheck] == QUEEN)
			return false;

		rowCheck++;
		colCheck--;
	}

	return true;
}

QueenSolver::QueenSolver(int pSize)
{
	_problemSize = pSize;
	for (int rowIndex = 0; rowIndex < _problemSize; rowIndex++)
		for (int colIndex = 0; colIndex < _problemSize; colIndex++)
			theBoard[rowIndex][colIndex] = EMPTY;
}

/*
void QueenSolver::initBoard()
{

}
*/

void QueenSolver::printBoard()
{

	for (int rowIndex = 0; rowIndex < _problemSize; rowIndex++)
	{
		printRowHeader(_problemSize);
		cout << "|";
		for (int colIndex = 0; colIndex < _problemSize; colIndex++)
		{
			cout << theBoard[rowIndex][colIndex] << '|';
		}
		cout << endl;
	}
	printRowHeader(_problemSize);
}

void printRowHeader(int numCols)
{
	for (int colIndex = 0; colIndex < numCols; colIndex++)
		cout << "+-";
	cout << '+' << endl;
}

bool QueenSolver::solveBoard()
{
	return solveBoard(0, _problemSize);
}

bool QueenSolver::solveBoard(int nextColumnNumber, int n)
{
	// base case
	if (nextColumnNumber >= n)
		return true;

	// go through every possible move (in this column)
	for (int nextRowMove = 0; nextRowMove < n; nextRowMove++)
	{
		// try to put a queen in this location
		if (canPlace(nextRowMove, nextColumnNumber, theBoard))
		{
			// try next move by making it ... 
			theBoard[nextRowMove][nextColumnNumber] = QUEEN;

			bool solutionFound = solveBoard(nextColumnNumber + 1, n);

			if (solutionFound)
				return true;
			else // need to undo move because it didn't work
				theBoard[nextRowMove][nextColumnNumber] = EMPTY;
		}
	}
	// tried all possible moves, none worked. No solution. 
	return false;
}
