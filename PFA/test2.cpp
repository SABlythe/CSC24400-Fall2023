#include "PFA.hpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    PFA names;
    cout << "names is now:" <<endl;
    names.print(cout);
    cout << "=========" << endl;

    return 0;
}
