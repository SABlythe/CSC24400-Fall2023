#include <iostream>
using namespace std;

#include "Queensolver.hpp"

int main(int argc, char* argv[])
{
	int probSize;
	cout << "How big is the board? "  << endl;
	cin >> probSize;

	initBoard(probSize);
	printBoard(probSize);

	cout << endl << endl << "==========================" << endl << endl;

	if (!solveBoard(probSize))
		cout << "NO SOLUTION FOUND!" << endl;
	else
		printBoard(probSize);

	return 0;
}
