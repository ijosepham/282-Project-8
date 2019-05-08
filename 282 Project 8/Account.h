// Account.h
///////////////////

#pragma once

class Account
{
protected:
	// initial balance of the 
	double balance;
public:
	// constructors and destructor
	Account();
	Account(double);
	~Account();
	
	// account methods
	virtual void deposit(double);
	virtual bool withdraw(double);
	double getBalance();
};

