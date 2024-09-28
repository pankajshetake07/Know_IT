#include "Account.h"

Account::Account() {
	balance = 0;
}
void Account::deposite() {
	int amount;
	cout << "\n\tEnter amount : ";
	cin >> amount;
	balance = balance + amount;
	//cout << "\n\n\tTotal : " << balance;
}

void Account::withdraw() {
	int withdrawAmt;
	cout << "\n\tEnter withdraw amount : ";
	cin >> withdrawAmt;
	balance = balance - withdrawAmt;
	try
	{
		if (balance < 0) {
			throw - 1;
		}
	}
	catch (int a)
	{
		cout << "\n\n\tInsufficient balance..";
	}

	try
	{
		if (withdrawAmt > 15000) {
			throw - 1;
		}
	}
	catch (int a)
	{
		cout << "\n\n\tover limit ..";
	}
}

void Account::checkBalance() {
	try
	{
		if (balance < 0) {
			throw 0;
		}
	}
	catch (int a)
	{
		cout << "Your account balance is below zero..!";
	}
	cout << "\n\tTotal Balance : " << balance << endl;
}