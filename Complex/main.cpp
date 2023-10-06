#include <iostream>

#include "Complex.hpp"

int main(int argc, char *argv[])
{
    Complex myVar;
    myVar.print();

    Complex otherVar(3 , -7);
    otherVar.print();

    return 0;
}
