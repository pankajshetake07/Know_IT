#include "box.h"

Box::Box() {
	x_cord = 4;
	y_cord = 6;
}

Box::Box(int x, int y) {
	x_cord = x;
	y_cord = y;
}

void Box::display() {
	cout << "\n\n\t[" << x_cord << "," << y_cord<<"]";
}