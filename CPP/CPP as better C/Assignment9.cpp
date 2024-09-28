#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Student {
	int rollno;
	char name[30];
	int totalMarks;
	void accept() {
		cout << "\n\n\tEnter Roll number, name of the student and total marks : ";
		cin >> rollno >> name >> totalMarks;
	}
	void display() {
		cout << "\n\n\tRoll Number is : " << rollno;
		cout << "\n\n\tName : " << name;
		cout << "\n\n\tTotal Marks : " << totalMarks;
	}
};

Student getMaxMarks(Student s1[], int size) {
	Student max = s1[0];
	for (int i = 0; i < size; i++) {
		if (s1[i].totalMarks > max.totalMarks) {
			max = s1[i];
		}
	}
	return max;
}

int main() {
	Student s1[4];
	for (int i = 0; i < 4; i++) {
		s1[i].accept();
	}
	for (int i = 0; i < 4; i++) {	
		s1[i].display();
		cout << "\n\t----------------------";
	}
	cout << endl << endl;
	Student s = getMaxMarks(s1, 4);
	s.display();
	
	cout << endl << endl;
}