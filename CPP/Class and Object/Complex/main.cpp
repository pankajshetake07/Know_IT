#include "complex.h"
int main() {
	Complex c1;
	c1.display();
	Complex c2(3, 4);
	c2.display();
	Complex c3;
	c3.setReal(3);
	c3.setImag(9);
	c3.display();
	cout << endl << endl;
}