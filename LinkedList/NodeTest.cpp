#include "StringNode.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    StringNode node1;
    StringNode node2("Hello World");

    cout << "node1 = " << node1 << endl;
    cout << "node2 = " << node2 << endl;

    return 0;
}
