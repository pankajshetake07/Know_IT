#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
class Employee {
	int empid;
	char name[20];
	double salary;

public:
	void accept();
	void display();
};

void Employee::accept() {
	cout << "\n\n\tEnter Employee id : ";
	cin >> empid;
	cout << "\n\tEnter Employee name : ";
	cin >> name;
	cout << "\n\tEnter Employee salary : ";
	cin >> salary;
}

void Employee::display() {
	cout << "\n\n\tEmployee Details : ";
	cout << "\n\tEMP ID : " << empid;
	cout << "\n\tEMP NAME : " << name;
	cout << "\n\tEMP SALARY : " << salary;
}

int main() {
	vector<Employee> emp;
	Employee e;
	for (int i = 0; i < 3; i++) {
		e.accept();
		emp.push_back(e);
	}
	for (int i = 0; i < 3; i++) {
		
		emp[i].display ();
	}
}