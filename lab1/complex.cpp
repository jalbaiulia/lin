#include <stdio.h>
#include <iostream>
#include "complex.h"
 
using namespace std;

// bubu behaviour
int *f()
{
    int x = 250;
    return &x;
}

int *g()
{
    int y = 300;
    return NULL;
}

int main() {
    Complex number(2, 3);
    printf("%lf %lf\n", number.getRe(), number.getIm());

    Complex sum = number.add(Complex(2,3));
    printf("%lf+%lfi\n", sum.getRe(), sum.getIm());

 
    // bubu is on fire
    int *p = f();
    g();
    printf("%d\n", *p);
    // endif bubu
    //

    


    return 0;
}
