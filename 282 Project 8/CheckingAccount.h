#pragma once
#include "Account.h"
class CheckingAccount :
	public Account
{
private:
	double fee;
public:
	CheckingAccount();
	CheckingAccount(double, double);
	~CheckingAccount();

	double getFee();
	void deposit(double);
	bool withdraw(double);
};

