#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>

class Complex
{
private:
    double _real;
    double _imaginary;
public:
    Complex() {_real=_imaginary=0;}
    Complex(double rVal, double iVal)
    { _real=rVal; _imaginary=iVal; }

    void print(std::ostream &printToThis) const;

    //Complex add(Complex otherNumber);
    Complex operator+(const Complex &otherNumber) const;
    Complex operator+(double otherNumber) const;

    Complex operator*(const Complex &otherNumber) const;
    Complex operator*(double otherNumber) const;

    friend Complex operator+ (double value, const Complex &cNum);
    friend Complex operator* (double value, const Complex &cNum);
};




#endif













