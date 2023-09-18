#include <iostream>

#define SIZE 1
#define QUEEN 'Q'
#define EMPTY ' '

using namespace std;

char theBoard[SIZE][SIZE];

void printRowHeader();

bool canPlace(int intoRow, int intoCol)
{
	// check same row
	for (int colCheck = intoCol - 1; colCheck >= 0; colCheck--)
		if (theBoard[intoRow][colCheck] == QUEEN)
			return false;

	// check UL diagonal
	int colCheck=intoCol-1,
		rowCheck=intoRow-1;

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

void initBoard()
{
	for (int rowIndex = 0; rowIndex < SIZE; rowIndex++)
		for (int colIndex = 0; colIndex < SIZE; colIndex++)
			theBoard[rowIndex][colIndex] = EMPTY;
}

void printBoard()
{

	for (int rowIndex = 0; rowIndex < SIZE; rowIndex++)
	{
		printRowHeader();
		cout << "|";
		for (int colIndex = 0; colIndex < SIZE; colIndex++)
		{
			cout << theBoard[rowIndex][colIndex] << '|';
		}
		cout << endl;
	}
	printRowHeader();
}

void printRowHeader()
{
	for (int colIndex = 0; colIndex < SIZE; colIndex++)
		cout << "+-";
	cout << '+' << endl;
}

bool solveBoard(int nextColumnNumber)
{
	// base case
	if (nextColumnNumber >= SIZE)
		return true;

	// go through every possible move (in this column)
	for (int nextRowMove = 0; nextRowMove < SIZE; nextRowMove++)
	{
		// try to put a queen in this location
		if (canPlace(nextRowMove, nextColumnNumber))
		{
			// try next move by making it ... 
			theBoard[nextRowMove][nextColumnNumber] = QUEEN;

			bool solutionFound = solveBoard(nextColumnNumber + 1);

			if (solutionFound)
				return true;
			else // need to undo move because it didn't work
				theBoard[nextRowMove][nextColumnNumber] = EMPTY;
		}
	}
	// tried all possible moves, none worked. No solution. 
	return false;
}

int main(int argc, char* argv[])
{
	initBoard();
	printBoard();

	cout << endl << endl << "==========================" << endl << endl;

	if (!solveBoard(0))
		cout << "NO SOLUTION FOUND!" << endl;
	else
		printBoard();

	return 0;
}