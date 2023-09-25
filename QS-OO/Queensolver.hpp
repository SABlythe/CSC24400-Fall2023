#ifndef _QUEEN_SOLVER_HPP_
#define _QUEEN_SOLVER_HPP_


class QueenSolver
{
private:
  int _problemSize;
public:
  QueenSolver(int pSize);
  //void initBoard();
  void printBoard();
  bool solveBoard();
private:
  bool solveBoard(int, int);
};


#endif
