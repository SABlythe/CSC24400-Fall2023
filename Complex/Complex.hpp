#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

class Complex
{
private:
    double _real;
    double _imaginary;
public:
    Complex() {_real=_imaginary=0;}
    Complex(double rVal, double iVal)
    { _real=rVal; _imaginary=iVal; }

    void print();

    //Complex add(Complex otherNumber);
    Complex operator+(Complex otherNumber);
    Complex operator+(double otherNumber);
};

#endif





