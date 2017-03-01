#include "complex.h"
Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}
 
Complex::~Complex() {
}
 
Complex Complex::conjugate() {
    Complex conjugat(re, -im);
    return conjugat;
}


Complex Complex::add(Complex b){
    return Complex(re+b.re, im+b.im);
}

double Complex::getRe() {
    return re;
}
 
double Complex::getIm() {
    return im;
}
