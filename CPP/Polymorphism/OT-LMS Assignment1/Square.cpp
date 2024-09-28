#include "Square.h"
Square::Square() {
	side = 1;
}
Square::Square(int side) {
	this->side = side;
}
void Square::calculateArea() {
	area = side * side;
}
void Square::calculatePerimeter() {
	perimeter = 4 * side;
}