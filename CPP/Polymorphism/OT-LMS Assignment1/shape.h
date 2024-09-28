#pragma once
#include<iostream>
using namespace std;
class Shape {
protected:
	long area;
	long perimeter;
public:
	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;
	void display() {
		cout << "\n\tArea : " << area<<endl;
		cout << "\n\tPerimeter : " << perimeter<<endl;
	}
};
