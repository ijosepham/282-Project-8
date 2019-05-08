// CheckingAccount.cpp
///////////////////

#include "pch.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

// description: default constructor
CheckingAccount::CheckingAccount() : Account ()
{
	fee = 0.0;
}

// description: overloaded constructor
// preconditions:  balance - initial balance of the accouint
//				   fee - fee for withdrawing or depositing
CheckingAccount::CheckingAccount(double balance, double fee) : Account (balance)
{
	this->fee = fee;
}

// description: destructor
CheckingAccount::~CheckingAccount()
{
	//destructor
}

// description: gets the fee of the account
// postcondition: the fee of the account
double CheckingAccount::getFee()
{
	return fee;
}

// description: overridden deposit to include a fee tax
// preconditions: credit - amount you want to deposit
void CheckingAccount::deposit(double credit)
{
	if (fee > credit) {
		cout << "Fee exceeded credit.";
	}
	else {
		balance += credit - fee;
	}
}

// description: overridden withdrwas money with a fee tax
// preconditions: debit - amount to withdraw
// postcondition: whether or not the withdrawal was successful
bool CheckingAccount::withdraw(double debit)
{
	if (balance < (debit + fee)) {
		cout << "debit and fee exceeded account balance.";
		return false;
	}
	else {
		balance -= debit + fee;
		return true;
	}
}
