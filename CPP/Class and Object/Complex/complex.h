#include <iostream>
using namespace std;

class Complex {
	int real, imag;
public:
	Complex();
	Complex(int, int);
	void setReal(int);
	/*int getReal();*/
	void setImag(int);
	/*int getImag();*/
	void display();
};
