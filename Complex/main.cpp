#include <iostream>

using namespace std;

#include "Complex.hpp"

void mystery(const Complex &cpx)
{
    cout << cpx.imaginary() << endl;
}

int main(int argc, char *argv[])
{
    Complex myVar;
    myVar.print(cout);
    cout << endl;

    Complex otherVar(3 , -7);
    otherVar.print(cout);
    cout << endl;

    Complex thirdVar(1,1);
    myVar = otherVar + thirdVar;
    //myVar = otherVar.add(thirdVar);
    //myVar = otherVar.operator+(thirdVar);
    myVar.print(cout);
    cout << endl;
    otherVar.print(cout); // did otherVar change?

    cout << endl << "=======" << endl;

    double pi = 3.1416;
    Complex addPi;

    addPi = myVar * pi;
    addPi.print(cout);
    cout << endl;

    Complex hmmm;
    hmmm = pi * myVar;
    hmmm.print(cout);
    cout << endl;

    Complex math = myVar + pi * hmmm + addPi *pi;
    math.print(cout);
    cout << endl;

    cout << math.imaginary() << endl;

    math.imaginary() = 666;
    cout << math.imaginary() << endl;
    //math.print(cout);
    cout  << math << endl;

    Complex negatory = -math;
    cout << "-math = " << negatory << endl;
    // baaaaad return by reference example
    //Complex result = doAdd(hmmm, math);
    //result.print(cout);
    //cout << endl;
    return 0;
}




