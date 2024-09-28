#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void accept(int* arr, int size) {
	cout << "\n\n\tEnter array elements : ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void display(int* arr, int size) {
	cout << "\n\n\tArray elements are : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}
}

int maxElement(int* arr, int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int minElement(int* arr, int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

bool searchElement(int* arr, int size) {
	int key;
	cout << "\n\n\tEnter element which you want to search in array : ";
	cin >> key;
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return true;
		}
	}
	return false;
}

void countEvenOdd(int* arr, int size, int &evenCount, int &oddCount) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			evenCount++;
		}
		else {
			oddCount++;
		}
	}
}

int main() {
	int* arr, size;
	cout << "\n\n\n\tEnter array size : ";
	cin >> size;
	arr = new int[size];
	accept(arr, size);
	display(arr, size);
	cout << "\n\n\tMaximum Element is : "<<maxElement(arr, size);
	cout << "\n\n\tMinimum Element is : " << minElement(arr, size);
	if (searchElement(arr, size)) {
		cout << "\n\n\tElement is found";
	}
	else {
		cout << "\n\n\tNot found";
	}
	int evenCount = 0;
	int oddCount = 0;
	countEvenOdd(arr, size, evenCount, oddCount);
	cout << "\n\n\tEven count is = " << evenCount;
	cout << "\n\n\tOdd count is = "<<oddCount;
	cout << endl << endl;
	return 0;
}