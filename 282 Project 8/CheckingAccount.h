#pragma once
#include "Account.h"
class CheckingAccount :
	public Account
{
private:
	// fee tax to withdraw/deposit
	double fee;
public:
	// constructors and destructor
	CheckingAccount();
	CheckingAccount(double, double);
	~CheckingAccount();

	// checking account methods
	double getFee();
	void deposit(double);
	bool withdraw(double);
};

