#ifndef _QUEEN_SOLVER_HPP_
#define _QUEEN_SOLVER_HPP_

#define SIZE 100

class QueenSolver
{
private:
  int _problemSize;
  char theBoard[SIZE][SIZE];
public:
  QueenSolver(int pSize);
  //void initBoard();
  void printBoard();
  bool solveBoard();
private:
  bool solveBoard(int, int);
};


#endif
