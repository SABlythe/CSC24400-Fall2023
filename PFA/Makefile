pfa: PFA.o test.o
	g++ -o pfa PFA.o test.o

PFA.o: PFA.cpp PFA.hpp
	g++ -c -g -Wall -ansi -pedantic -std=c++20 PFA.cpp

test.o: test.cpp PFA.hpp
	g++ -c -g -Wall -ansi -pedantic -std=c++20 test.cpp


