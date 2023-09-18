#include <iostream>

using namespace std;

char theBoard[8][8];

void printRowHeader();

void initBoard()
{
	for (int rowIndex = 0; rowIndex < 8; rowIndex++)
		for (int colIndex = 0; colIndex < 8; colIndex++)
			theBoard[rowIndex][colIndex] = ' ';
}

void printBoard()
{

	for (int rowIndex = 0; rowIndex < 8; rowIndex++)
	{
		printRowHeader();
		cout << "|";
		for (int colIndex = 0; colIndex < 8; colIndex++)
		{
			cout << theBoard[rowIndex][colIndex] << '|';
		}
		cout << endl;
	}
	printRowHeader();
}

void printRowHeader()
{
	for (int colIndex = 0; colIndex < 8; colIndex++)
		cout << "+-";
	cout << '+' << endl;
}

bool solveBoard(int nextColumnNumber)
{
	// base case
	if (nextColumnNumber >= 8)
		return true;

	// go through every possible move (in this column)
	for (int nextRowMove = 0; nextRowMove < 8; nextRowMove++)
	{
		// try to put a queen in this location
		if (canPlace(nextRowMove, nextColumnNumber))
		{
			theBoard[nextRowMove][nextColumnNumber] = 'Q';
		}
	}
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