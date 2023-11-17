#include <iostream>

#include "IntBinaryTree.hpp"
#include "IntBinaryTreeNode.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    IntBinaryTree myTree;

    myTree.insert(9);
    myTree.insert(3);
    myTree.insert(-3);
    myTree.insert(7);

    for (int index=1; index<argc; index++)
    {
        myTree.insert( atoi(argv[index]) );
    }

    myTree.print(cout);

    return 0;
}
