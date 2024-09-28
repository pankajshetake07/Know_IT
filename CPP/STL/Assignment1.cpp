#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	int choice;
	bool flag = false;
	do {
		cout << "\n\n1.Add element\n2.Disply\n3.Search element\n4.Count\n5.Exit";
		cout << "\n\nEnter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			int element;
			cout << "Enter element : ";
			cin >> element;
			v.push_back(element);
			break;
		case 2:
			for (int x : v) {
				cout << x << " ";
			}
			break;
		case 3:
			int key;
			cout << "Enter element that you want to search : ";
			cin >> key;
			int index;
			for (int i = 0; i < v.size(); i++) {
				if (key == v[i]) {
					flag = true;
					index = i + 1;
				}
			}
			if (flag==true) {
				cout << "Element is found at index "<<index;
			} 
			else {
				cout << "Element is not found.";
			}
			break;
		case 4:
			cout << "Count of element is : "<<v.size();
			break;
		case 5:
			cout << "Thank you.....";
			break;
		default:
			cout << "Enter correct choice.";
		}
	} while (choice != 5);
}