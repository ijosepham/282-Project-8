#include "pch.h"
#include "SavingsAccount.h"
#include <iostream>

using namespace std;

SavingsAccount::SavingsAccount() : Account()
{
	// super constructor
	interestRate = 0.0;
}

SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance)
{
	this->interestRate = interestRate;
}


SavingsAccount::~SavingsAccount()
{
	// destructor
}

double SavingsAccount::getInterestRate()
{
	return interestRate;
}

double SavingsAccount::calculateInterest()
{
	return balance * interestRate;
	// return balance + balance * interestRate;
}
