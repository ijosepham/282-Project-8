#pragma once
#include "Account.h"
class SavingsAccount :
	public Account
{
private:
	// interest rate of the account
	double interestRate;
public:
	// constructors and destructor
	SavingsAccount();
	SavingsAccount(double, double);
	~SavingsAccount();

	// savingsa ccount methods
	double getInterestRate();
	double calculateInterest();
};

