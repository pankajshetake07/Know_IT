#include "Account.h"

int main() {
	Account a1;
	int ch;
	do {
		cout << "\n\t1.Deposite";
		cout << "\n\t2.Withdraw";
		cout << "\n\t3.Check Balance";
		cout << "\n\t0.Exit..";
		cout << "\n\tEnter choice : ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			a1.deposite();
			break;
		case 2:
			a1.withdraw();
			break;
		case 3:
			a1.checkBalance();
			break;
		case 0:
			cout << "\n\nExited..";
			break;
		}
	} while (ch != 0);
	cout << endl << endl;
	return 0;
}