#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main(int no, char* p[]) {
	int a = atoi(p[1]);
	int b = atoi(p[2]);
	cout << "\n\n\n\tAddition is : " << a + b;
	cout << "\n\n\n\tSubtraction is : " << a - b;
	cout << "\n\n\n\tMultiplication is : " << a * b;
	cout << "\n\n\n\tDivision is : " << a / b<<endl<<endl;
	return 0;
}