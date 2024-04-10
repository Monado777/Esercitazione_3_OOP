#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;
using namespace CustomComplexLibrary;

int main()
{
    using namespace CustomComplexLibrary;
    CustomComplexNumber z1(1.0,2.0);
    CustomComplexNumber z2(4.0,3.0);
    CustomComplexNumber *pz1 = &z1;
    CustomComplexNumber *pz2 = &z2;
    cout << "z1=" << *pz1 << "z2=" << *pz2 << std::endl;
    CustomComplexNumber sum = *pz1 + *pz2;
    CustomComplexNumber *psum = &sum;
    std::cout << " z1 + z2 = " << *psum << std::endl;
    std::cout << " z1 == z2 ? " << (*pz1 == *pz2) << endl;
    CustomComplexNumber z1_ = CustomComplexNumber CustomComplexConjugate(*pz1);
    return 0;
}
