#include "StringNode.hpp"
#include "StringList.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    StringNode node1;
    StringNode node2("Hello World");

    cout << "node1 = " << node1 << endl;
    cout << "node2 = " << node2 << endl;

    StringList myl;

    myl.addToFront("Hello");
    myl.addToFront("World");
    myl.addToFront("Happy");
    myl.addToFront("Monday");

    myl.print(cout);

    return 0;
}
