#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}

float add(int a, float b) {
	return a + b;
}

float add(float a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

int main() {
	cout << "\n\n\tAddition is = " << add(3, 5);
	cout << "\n\n\tAddition is = " << add(3, 5.5f);
	cout << "\n\n\tAddition is = " << add(3.4f, 5);
	cout << "\n\n\tAddition is = " << add(3.1f, 5.8f);
	cout << "\n\n";
	return 0;
}