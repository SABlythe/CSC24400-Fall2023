#include "Complex.hpp"

#include <iostream>

using namespace std;

void Complex::print()
{
    cout << _real << " + " << _imaginary << 'i';
}

Complex
//Complex::add(Complex otherNumber)
Complex::operator+(Complex otherNumber)
{
    Complex addResult;
    addResult._real = _real + otherNumber._real;
    addResult._imaginary = _imaginary + otherNumber._imaginary;
    return addResult;
}

Complex
Complex::operator+(double otherNumber)
{
    Complex answer(otherNumber+_real, _imaginary);
    return  answer;
}








