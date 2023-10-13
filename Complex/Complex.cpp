#include "Complex.hpp"

#include <iostream>

using namespace std;

void Complex::print(ostream &toMe) const
{
    toMe << _real << " + " << _imaginary << 'i';
}

Complex
//Complex::add(Complex otherNumber)
Complex::operator+(const Complex &otherNumber) const
{
    Complex addResult;
    addResult._real = _real + otherNumber._real;
    addResult._imaginary = _imaginary + otherNumber._imaginary;
    //_real = -666; // uncomment and the above const gives error
    return addResult;
}

Complex
Complex::operator+(double otherNumber) const
{
    Complex answer(otherNumber+_real, _imaginary);

    return  answer;
}


Complex operator+(double dval, const Complex &c)
{
    Complex addResult;
    addResult._real = dval + c._real;
    addResult._imaginary = c._imaginary;

    return addResult;
}

Complex
Complex::operator*(const Complex &otherNumber) const
{
    Complex addResult;
    addResult._real = _real* otherNumber._real -
                      _imaginary* otherNumber._imaginary;
    addResult._imaginary = _real * otherNumber._imaginary +
                           _imaginary * otherNumber._real;
    return addResult;
}

Complex
Complex::operator*(double otherNumber) const
{
    Complex answer(otherNumber*_real, otherNumber*_imaginary);
    return  answer;
}


Complex operator*(double dval, const Complex &c)
{
    return c* dval;
}




