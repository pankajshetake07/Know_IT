#include<iostream>
using namespace std;

int findElement(int* arr, int no, int index) {
	for (int i = 0; i < no; i++) {
		if (arr[i] == index) {
			return i;
		}
	}
	return -1;
}

int deleteElement(int* arr, int no, int index) {
	int pos = findElement(arr, no, index);
	if (pos == -1) {
		cout << "Invalid index..";
		return 0;
	}

	for (int i = pos; i < no - 1; i++) {
		arr[i] = arr[i + 1];
	}
	return no - 1;
}

int main() {
	int* arr, no;
	cout << "How many elements you want : ";
	cin >> no;
	arr = new int[no];
	cout << "Enter array elements : ";
	for (int i = 0; i < no; i++) {
		cin >> arr[i];
	}
	cout << "array elements are : ";
	for (int i = 0; i < no; i++) {
		cout << arr[i]<<" ";
	}
	int index;
	cout << "Enter index which you want to delete :";
	cin >> index;
	int newArr = deleteElement(arr, no, index);
	for (int i = 0; i < newArr; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}