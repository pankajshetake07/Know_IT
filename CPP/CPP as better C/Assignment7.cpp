#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a, b;
	cout << "\n\n\n\tEnter two numbers : ";
	cin >> a >> b;
	cout << "\n\n\tNumber before swapping : "<< a<<" "<<b;
	swap(a, b);
	cout << "\n\n\tNumber after swapping : " << a << " " << b<<endl<<endl;
	return 0;
}