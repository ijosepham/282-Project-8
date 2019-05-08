// Account.cpp
///////////////////

#include "pch.h"
#include "Account.h"
#include <iostream>

using namespace std;

// description: default constructor
Account::Account()
{
	balance = 0.0;
}

// description: overloaded constructor
// preconditions: balance - initial balance of the account
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

// description: destructor
Account::~Account()
{
	// destructor
}

// description: put money into the account
// preconditions: amount of mnoey to put into the account
void Account::deposit(double credit)
{
	if (credit < 0) {
		cout << "Invalid credit.";
	}
	else {
		balance += credit;
	}
}

// description: takes money from the account
// preconditions: debit - amount to take from the account
// postcondition: whether or not it was successful
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

// description: gets the balacne of the account
// postcondition: balance of the account
double Account::getBalance()
{
	return balance;
}
