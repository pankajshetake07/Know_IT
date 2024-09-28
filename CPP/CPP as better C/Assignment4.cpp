#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main(int a, char *p[]) {
	int arr[5];
	int sum = 0;
	for (int i = 1; i <= 5; i++) {
		arr[i] = atoi(p[i]);
		sum = sum + arr[i];
	}
	cout << "\n\n\n\tSum = " << sum;
	cout << "\n\n\tAverage is = " << sum / 5;
	delete[] p;
	return 0;
}