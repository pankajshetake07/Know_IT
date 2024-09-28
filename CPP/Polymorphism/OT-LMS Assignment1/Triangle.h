#include "shape.h"
class Triangle : public Shape {
	int base;
	int height;
public:
	Triangle();
	Triangle(int, int);
	void calculateArea();
	void calculatePerimeter();
};
