# from # to end of line is a comment
CC = g++ -c -Wall -ansi -pedantic -std=c++20

all: pfa pfa2

pfa: PFA.o test.o
	g++ -o pfa PFA.o test.o

pfa2: PFA.o test2.o
	g++ -o pfa2 PFA.o test2.o

PFA.o: PFA.cpp PFA.hpp
	$(CC) PFA.cpp

test.o: test.cpp PFA.hpp
	$(CC) test.cpp

test2.o: test2.cpp PFA.hpp
	$(CC) test2.cpp

clean:
	/bin/rm -f *.o pfa pfa2
















