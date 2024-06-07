// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account.
#include <iostream>
using namespace std;
class BankAccount
{
	long ano;
	double balance;
public:
	BankAccount()
	{
		balance=0;
	}
	void setAccountNumber()
	{
		cout<<"Enter Account Number: "; //User Input - Account Number
		cin>>ano;
	}
	void deposit(float deposit)
	{
		balance=balance+deposit;
		cout<<"\nTotal Balance: "<<balance<<endl<<endl;
	}
	void withdraw(float withdraw)
	{
		if(balance==0)
		{
			cout<<"\nYour Balance is 0. Cannot Withdraw\n\n";
		}
		else if(balance<withdraw)
		{
			cout<<"\nInsufficient Balance. Cannot Withdraw\n";
			cout<<endl<<"Total Balance: "<<balance<<endl<<endl;
		}
		else
		{
			balance=balance-withdraw;
			cout<<"\nTotal Balance: "<<balance<<endl<<endl;
		}
	}
	void getAccountDetails()
	{
		cout<<"\nAccount Number: "<<ano<< endl;
        cout<<"Balance: "<<balance<< endl;
	}
};

int main()
{
	cout<<"BANK SYSTEM\n\n";

	int ch;
	float deposit,withdraw;
	BankAccount b1;
	b1.setAccountNumber();

	cout<<"\n1.Deposit Money\n2.Withdraw Money\n3.Display Details\n4.Exit\n\n";

	while(true)
	{
		cout<<"Enter Your Choice: "; //User Input - Choice
		cin>>ch;
		cout<<endl;

		switch(ch)
		{
		case 1:
			cout<<"Enter Depositing Amount: "; //User Input - Depositing Amount
			cin>>deposit;
			b1.deposit(deposit);
			break;
		case 2:
			cout<<"Enter Withdrawal Amount: "; //User Input - Withdrawal Amount
			cin>>withdraw;
			b1.withdraw(withdraw);
			break;
		case 3:
			b1.getAccountDetails();		
			break;
		case 4:
			cout<<"Logged Out.\n";
			exit(0);
			break;
		default:
			cout<<"Invalid Choice."<<endl;
		}
	}
}