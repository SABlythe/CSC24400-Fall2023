#include <iostream>
using namespace std;

#define SIZE 100
#define QUEEN 'Q'
#define EMPTY ' '
char theBoard[SIZE][SIZE];

void printRowHeader(int);
bool solveBoard(int, int);

bool canPlace(int intoRow, int intoCol)
{
	// check same row
	for (int colCheck = intoCol - 1; colCheck >= 0; colCheck--)
		if (theBoard[intoRow][colCheck] == QUEEN)
			return false;

	// check UL diagonal
	int colCheck = intoCol - 1,
		rowCheck = intoRow - 1;

	while (colCheck >= 0 && rowCheck >= 0)
	{
		if (theBoard[rowCheck][colCheck] == QUEEN)
			return false;

		rowCheck--;
		colCheck--;
	}


	// check LL diagonal
	colCheck = intoCol - 1,
		rowCheck = intoRow + 1;

	while (colCheck >= 0 && rowCheck < SIZE)
	{
		if (theBoard[rowCheck][colCheck] == QUEEN)
			return false;

		rowCheck++;
		colCheck--;
	}

	return true;
}

void initBoard(int actualSize)
{
	for (int rowIndex = 0; rowIndex < actualSize; rowIndex++)
		for (int colIndex = 0; colIndex < actualSize; colIndex++)
			theBoard[rowIndex][colIndex] = EMPTY;
}

void printBoard(int pSize)
{

	for (int rowIndex = 0; rowIndex < pSize; rowIndex++)
	{
		printRowHeader(pSize);
		cout << "|";
		for (int colIndex = 0; colIndex < pSize; colIndex++)
		{
			cout << theBoard[rowIndex][colIndex] << '|';
		}
		cout << endl;
	}
	printRowHeader(pSize);
}

void printRowHeader(int numCols)
{
	for (int colIndex = 0; colIndex < numCols; colIndex++)
		cout << "+-";
	cout << '+' << endl;
}

bool solveBoard(int probSize)
{
	return solveBoard(0, probSize);
}

bool solveBoard(int nextColumnNumber, int n)
{
	// base case
	if (nextColumnNumber >= n)
		return true;

	// go through every possible move (in this column)
	for (int nextRowMove = 0; nextRowMove < n; nextRowMove++)
	{
		// try to put a queen in this location
		if (canPlace(nextRowMove, nextColumnNumber))
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
