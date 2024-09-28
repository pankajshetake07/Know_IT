#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int multpliply(int no1 = 1, int no2 = 1, int no3 = 1) {
	return no1 * no2 * no3;
}
int main() {
	int a, b, c;
	cout << "\n\n\n\tEnter three numbers : ";
	cin >> a >> b >> c;
	cout << "\n\n\tMultiplication is = " << multpliply(a);
	cout << "\n\n\tMultiplication is = " << multpliply(a,b);
	cout << "\n\n\tMultiplication is = " << multpliply(a, b, c);
	cout << endl << endl;
}