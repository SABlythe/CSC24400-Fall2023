#include <iostream>
using namespace std;

//#include "Queensolver.hpp"

int main(int argc, char* argv[])
{
	int probSize;
	cout << "How big is the board? "  << endl;
	cin >> probSize;

	QueenSolver puzzle;

	puzzle.initBoard(probSize);
	puzzle.printBoard(probSize);

	cout << endl << endl << "==========================" << endl << endl;

	if (!puzzle.solveBoard(probSize))
		cout << "NO SOLUTION FOUND!" << endl;
	else
		puzzle.printBoard(probSize);

	return 0;
}
