#include "Triangle.h"
#include "Square.h"
int main() {
	int side, base, height;
	cout << "\n\tEnter side : ";
	cin >> side;
	Square s(side);
	s.calculateArea();
	s.calculatePerimeter();
	s.display();
	cout << "\n\tEnter base and height : ";
	cin >> base >> height;
	Triangle t(base, height);
	t.calculateArea();
	t.calculatePerimeter();
	t.display();
}

