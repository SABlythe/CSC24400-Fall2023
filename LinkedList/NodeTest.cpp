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

    cout << "Enter a string to add to Tail: ";
    string findMe;
    cin >> findMe;

    myl.addToRear(findMe);

    myl.print(cout);

    StringList startsEmpty;
    startsEmpty.addToRear("anything");

    cout << "Before the new add methods:" << endl;
    myl.print(cout);
    string s = "Happy";
    myl.addAfter("Joy", myl.findNode(s));
    s = "World";
    myl.addBefore("Big", myl.findNode(s));
    s = "Monday";
    myl.addBefore("Awful", myl.findNode(s));
    cout << "After the new add methods:" <<endl;
    myl.print(cout);

    s="Happy";
    myl.removeValue(s);
    cout << "After removing Happy:" <<endl;
    myl.print(cout);

    s = "Hello";
    StringNode *found = myl.findNode(s);
    string *ptr = found->pdata();
    *ptr = "Hi";
    cout << "After changing Hello to Hi:" <<endl;
    myl.print(cout);

    s="Happy";
    myl.removeValue(findMe);
    cout << "After removing last element:" <<endl;
    myl.print(cout);

    s="Awful";
    myl.removeValue(s);
    cout << "After removing first element:" <<endl;
    myl.print(cout);

    return 0;
}









