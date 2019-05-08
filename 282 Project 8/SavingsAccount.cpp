// SavingsAccount.cpp
///////////////////

#include "pch.h"
#include "SavingsAccount.h"
#include <iostream>

using namespace std;

// description: default constructor
SavingsAccount::SavingsAccount() : Account()
{
	// super constructor
	interestRate = 0.0;
}

// description: overloaded constructor
// preconditions: balance - intiial balance of the savings account
//				  interestRate - interest rate of the savings account
SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance)
{
	this->interestRate = interestRate;
}

// description: destructor
SavingsAccount::~SavingsAccount()
{
	// destructor
}

// description: gets the interest rate of the savingsa ccount
// postcondition: interest rate of the savings account
double SavingsAccount::getInterestRate()
{
	return interestRate;
}

// description: calculates the interest of the savings account
// postcondition: interest of the savings account
double SavingsAccount::calculateInterest()
{
	return balance * interestRate;
	// return balance + balance * interestRate;
}
