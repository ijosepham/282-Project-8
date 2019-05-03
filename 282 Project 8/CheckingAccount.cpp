#include "pch.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount() : Account ()
{
	fee = 0.0;
}

CheckingAccount::CheckingAccount(double balance, double fee) : Account (balance)
{
	this->fee = fee;
}


CheckingAccount::~CheckingAccount()
{
	//destructor
}

double CheckingAccount::getFee()
{
	return fee;
}

void CheckingAccount::deposit(double credit)
{
	if (fee > credit) {
		cout << "Fee exceeded credit.";
	}
	else {
		balance += credit - fee;
	}
}

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
