#include <iostream>

using namespace std;

#include "Complex.hpp"

int main(int argc, char *argv[])
{
    Complex myVar;
    myVar.print();
    cout << endl;

    Complex otherVar(3 , -7);
    otherVar.print();
    cout << endl;

    Complex thirdVar(1,1);
    myVar = otherVar + thirdVar;
    //myVar = otherVar.add(thirdVar);
    //myVar = otherVar.operator+(thirdVar);
    myVar.print();
    cout << endl;

    double pi = 3.1416;
    Complex addPi;

    addPi = myVar + pi;
    addPi.print();
    cout << endl;

    Complex hmmm;
    hmmm = pi +myVar;
    hmmm.print();
    cout << endl;

    return 0;
}




