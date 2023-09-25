#include <iostream>
using namespace std;


#include "Queensolver.hpp"

int main(int argc, char* argv[])
{
	int probSize;
	cout << "How big is the board? "  << endl;
	cin >> probSize;

	QueenSolver puzzle(probSize);
	//puzzle.initBoard();
	puzzle.printBoard();

	cout << endl << endl << "==========================" << endl << endl;

	QueenSolver puzzle4(4);
	puzzle4.solveBoard();

	if (!puzzle.solveBoard())
		cout << "NO SOLUTION FOUND!" << endl;
	else
		puzzle.printBoard();

	cout << endl << endl;
	puzzle4.printBoard();

	return 0;
}
