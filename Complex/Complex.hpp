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

    double real() const {return _real;}
    double& real() {return _real;}

    double imaginary() const {return _imaginary;}
    double& imaginary() {return _imaginary;}

    void print(std::ostream &printToThis) const;

    //Complex add(Complex otherNumber);
    const Complex& operator+(const Complex &otherNumber) const;
    Complex operator+(double otherNumber) const;

    // unary
    Complex operator-() const;

    // binary
    Complex operator-(const Complex &otherNumber) const;
    Complex operator-(double otherNumber) const;

    Complex operator*(const Complex &otherNumber) const;
    Complex operator*(double otherNumber) const;

    friend Complex operator+ (double value, const Complex &cNum);
    friend Complex operator- (double value, const Complex &cNum);
    friend Complex operator* (double value, const Complex &cNum);

    friend std::ostream& operator<< (std::ostream &os, const Complex &cNum);

    // the following is the start of a bad idea
    friend Complex& doAdd(const Complex &lhs, const Complex &rhs);
};




#endif













