#include<iostream>
using namespace std;
#include<set>
int main() {
	std::set<int> values;
	for (int i = 1; i <= 10; i++) {
		values.insert(i);
	}

	std :: set<int> ::iterator it;
	for (it = values.begin(); it != values.end(); ++it) {
		cout << *it << " ";
	}
}