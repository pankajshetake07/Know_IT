#include "Triangle.h"
Triangle::Triangle() {
	base = height = 1;
}
Triangle::Triangle(int b, int h) {
	base = b;
	height = h;
}
void Triangle::calculateArea() {
	area = 0.5 * base * height;
}
void Triangle::calculatePerimeter() {
	perimeter = 3 * base;
}