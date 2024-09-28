#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void calculate(int no1, int no2, int& sum, int& product) {
	sum = no1 + no2;
	product = no1 * no2;
}
int main() {
	int no1, no2;
	int sum = 0; 
	int product = 0;
	cout << "\n\n\tEnter two numbers : ";
	cin >> no1 >> no2;
	calculate(no1, no2, sum, product);
	cout << "\n\n\tAddition is = " << sum;
	cout << "\n\n\tMultiplication is = " << product<<endl<<endl;
	return 0;
}