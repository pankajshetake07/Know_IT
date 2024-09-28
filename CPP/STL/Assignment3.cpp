#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;
int main() {
	list<char> ch;
	ch.push_front('p');
	ch.push_back('a');
	ch.push_back('n');
	ch.push_back('k');
	ch.push_back('a');
	ch.push_back('j');

	list<char> ::iterator it;

	for (it = ch.begin(); it != ch.end(); ++it)
		cout << *it;

	cout << "\n";
	cout << "\nReverse : ";
	ch.reverse();
	for (it = ch.begin(); it != ch.end(); ++it) {
		cout << *it;
	}
	cout << "\n";
	cout << "\nSorting list: ";
	ch.sort();
	for (it = ch.begin(); it != ch.end(); ++it) {
		cout << *it;
	}
	cout << '\n';
}