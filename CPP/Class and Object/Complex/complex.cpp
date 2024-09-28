#include "complex.h"

Complex::Complex() {
	real = imag = 1;
}

Complex::Complex(int real, int imag) {
	this->real = real;
	this->imag = imag;
}

//int Complex::getReal() {
//	return real;
//}

void Complex :: setReal(int real) {
	this->real = real;
}

//int Complex :: getImag() {
//	return imag;
//}

void Complex::setImag(int imag) {
	this->imag = imag;
}

void Complex::display() {
	cout << "\n\n\t" << real << " + " << imag << "i";
}