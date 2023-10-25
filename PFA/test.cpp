#include "PFA.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    PFA names;
    cout << "names is now:" <<endl;
    names.print(cout);
    cout << "=========" << endl;

    names.addElement("Blythe");
    names.addElement("Turing");
    names.addElement("Gates");
    names.addElement("Knuth");
    names.addElement("Jobs");

    cout << "names is now:" <<endl;
    names.print(cout);
    cout << "=========" << endl;

    names.removeElement("Gates");

    cout << "names is now:" <<endl;
    names.print(cout);
    cout << "=========" << endl;

    names.addElement("thing1");
    names.addElement("thing2");
    names.addElement("thing3");
    names.addElement("thing4");
    names.addElement("thing5");
    names.addElement("thing6");
    names.addElement("thing7");
    names.addElement("thing8");
    names.addElement("thing9");
    names.addElement("thing10");
    names.addElement("thing11");
    names.addElement("thing12");
    names.addElement("thing13");
    names.addElement("thing14");

    cout << "names is now:" <<endl;
    names.print(cout);
    cout << "=========" << endl;

    return 0;
}
