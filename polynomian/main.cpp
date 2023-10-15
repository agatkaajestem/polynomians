#include <iostream>
#include "polynomian.cpp"

using namespace std;

int main()
{
    // wielomian n1 4x^4-8x^3+x^2-6x+10
    // wielomian n2 9x^4-2x^3+4x^2-x-3
    double n1[5] = { 4, -8, 1, -6, 10};
    double n2[5] = { 9, -2, 4, -1, -3};
    double n3[9];

    add();
    sub();
    mul();
    return 0;
}