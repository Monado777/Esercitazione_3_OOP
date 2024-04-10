#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;
namespace CustomComplexLibrary{

class CustomComplexNumber
{
private:

    double real;
    double imag;

public:

    CustomComplexNumber(double a, double b):
        real(a),
        imag(b)
    {
        real = a; imag = b;
    }
    friend ostream& operator<<(ostream& os, const CustomComplexNumber& z)
    {
        return os << z.real << "+ i* (" << z.imag << ")" << endl;
    }

    CustomComplexNumber operator+ (const CustomComplexNumber& zs) const
    {
        double a_; double b_;
        CustomComplexNumber cplx_sum(a_, b_);
        cplx_sum.real = (this->real + zs.real);
        cplx_sum.imag = (this->imag + zs.imag);
        return cplx_sum;
    }

    bool operator== (const CustomComplexNumber& z) const
    {
        if (real == z.real && imag == z.imag)
            return true;
        return false;
    }

    CustomComplexNumber CustomComplexConjugate(CustomComplexNumber &z) const {
        z.imag = imag*(-1);
        z.real = real;
        return z;
        // return CustomComplexNumber(real, -1*imag);
    }
};

}

#endif
