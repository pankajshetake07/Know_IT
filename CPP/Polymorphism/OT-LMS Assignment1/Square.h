#include "shape.h"
class Square : public Shape {
	int side;
public:
	Square();
	Square(int);
	void calculateArea();
	void calculatePerimeter();
};

