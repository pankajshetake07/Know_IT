#define _CRT_SECUR_NO_WARNINGS
#include<iostream>
using namespace std;
class Box {
	int height, width, depth;
public:
	void setHeight(int);
	void setWidth(int);
	void setDepth(int);
	void showDetails();
	int calculateVolume();
};

void Box::setHeight(int height) {
	this->height = height;
}

void Box::setWidth(int width) {
	this->width = width;
}

void Box::setDepth(int depth) {
	this->depth = depth;
}

void Box::showDetails() {
	cout << "\n\n\tHeight : " << height;
	cout << "\n\n\tWidth : " << width;
	cout << "\n\n\tDepth : " << depth;
}

int Box::calculateVolume() {
	return height * width * depth;
}

int main() {
	Box b1;
	b1.setHeight(4);
	b1.setWidth(7);
	b1.setDepth(1);
	b1.showDetails();
	cout << "\n\n\tVolume = " << b1.calculateVolume();
	cout << endl << endl;
	return 0;
}