#pragma once
class Account
{
protected:
	double balance;
public:
	Account();
	Account(double);
	~Account();
	
	virtual void deposit(double);
	virtual bool withdraw(double);
	double getBalance();
};

