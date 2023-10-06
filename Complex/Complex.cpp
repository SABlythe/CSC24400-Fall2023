#include "Complex.hpp"

#include <iostream>

using namespace std;

void Complex::print()
{
    cout << _real << " + " << _imaginary << 'i';
}

Complex add(Complex otherNumber);
