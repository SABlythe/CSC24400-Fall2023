# from # to end of line is a comment
CC = g++ -c -Wall -ansi -pedantic -std=c++20

all: sntest

sntest: NodeTest.o StringNode.o StringList.o
	g++ -o sntest NodeTest.o StringNode.o StringList.o

NodeTest.o: NodeTest.cpp StringNode.hpp
	$(CC) NodeTest.cpp

StringList.o: StringList.cpp StringList.hpp StringNode.hpp
	$(CC) StringList.cpp

StringNode.o: StringNode.cpp StringNode.hpp StringList.hpp
	$(CC) StringNode.cpp

clean:
	/bin/rm -f *.o sntest
















