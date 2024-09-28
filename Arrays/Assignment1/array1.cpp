#include<iostream>
using namespace std;
int maxElement(int* arr, int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

int minElement(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

void multiplyBy5(int* arr, int size) {
	int arr1[5], j=0;
	for (int i = 0; i < size; i++) {
		arr1[j++] = arr[i] * 5;
	}
	for (int i = 0; i < size; i++) {
		cout << " " << arr1[i];
	}
}


int main() {
	int* arr, size;
	cout << "Enter how many elements you want : ";
	cin >> size;
	arr = new int[size];
	cout << "Enter array elements : \n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << "Enter array are :  \n";
	for (int i = 0; i < size; i++) {
		cout<< arr[i] <<" ";
	}
	
	cout <<"\n" << "Maximum Element is : " << maxElement(arr, size);
	cout <<"\n" << "Minimum Element is : " << minElement(arr, size);
	cout << endl;
	multiplyBy5(arr, size);
}