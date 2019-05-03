#include "pch.h"
#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()
{
	balance = 0.0;
}

Account::Account(double balance)
{
	if (balance >= 0.0) {
		this->balance = balance;
	}
	else {
		this->balance = 0.0;
		cout << "Invalid balance.";
	}
}


Account::~Account()
{
	// destructor
}

void Account::deposit(double credit)
{
	balance += credit;
}

bool Account::withdraw(double debit)
{
	if (debit <= balance) {
		balance -= debit;
		return true;
	}
	else {
		cout << "Debit amount exceeded account balance.";
		return false;
	}
}

double Account::getBalance()
{
	return balance;
}
