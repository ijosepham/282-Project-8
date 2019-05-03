#pragma once
#include "Account.h"
class SavingsAccount :
	public Account
{
private:
	double interestRate;
public:
	SavingsAccount();
	SavingsAccount(double, double);
	~SavingsAccount();

	double getInterestRate();
	double calculateInterest();
};

