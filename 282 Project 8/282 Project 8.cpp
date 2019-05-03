// 282 Project 8.cpp
//

#include "pch.h"
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Account acc(100);
	CheckingAccount cAcc(100,.15);
	SavingsAccount sAcc(100,.01);

	cout << "Base Account Tester:" << endl;
	cout << "Acc balance: $" << acc.getBalance() << endl;
	cout << "Deposit $10 into Acc." << endl;
	acc.deposit(10);
	cout << "Acc balance: $" << acc.getBalance() << endl;
	cout << "Withdraw $20 from Acc." << endl;
	acc.withdraw(20);
	cout << "Acc balance: $" << acc.getBalance() << endl;
	cout << "Withdraw $100 from acc." << endl;
	acc.withdraw(1000);
	cout << endl << "Acc balance: $" << acc.getBalance() << endl;

	cout << endl << "Checking Account Tester: " << endl;
	cout << "cAcc balance: $" << cAcc.getBalance() << endl;
	cout << "cAcc fee: $" << cAcc.getFee() << endl;
	cout << "Deposit $10 into cAcc." << endl;
	cAcc.deposit(10);
	cout << "cAcc balance: $" << cAcc.getBalance() << endl;
	cout << "Withdraw $20 from cAcc." << endl;
	cAcc.withdraw(20);
	cout << "Acc balance: $" << cAcc.getBalance() << endl;
	cout << "Withdraw $89.70 from cAcc." << endl;
	cAcc.withdraw(89.70);
	cout << endl << "Acc balance: $" << cAcc.getBalance() << endl;
	cout << "Withdraw $89.54 from cAcc." << endl;
	cAcc.withdraw(89.54);
	cout << endl << "Acc balance: $" << cAcc.getBalance() << endl;

	cout << endl << "Savings Account Tester: " << endl;
	cout << "sAcc balance: $" << sAcc.getBalance() << endl;
	cout << "sAcc interestRate: " << sAcc.getInterestRate() << endl;
	cout << "Deposit $10 into sAcc." << endl;
	sAcc.deposit(10);
	cout << "sAcc balance: $" << sAcc.getBalance() << endl;
	cout << "Withdraw $20 from sAcc." << endl;
	sAcc.withdraw(20);
	cout << "sAcc balance: $" << sAcc.getBalance() << endl;
	cout << "sAcc interest: $" << sAcc.calculateInterest();
}
