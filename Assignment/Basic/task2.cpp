//Define a class to represent a bank account. Include the following members:
// Data Member
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance
#include <iostream>
using namespace std;
class Bank_account
{
	string name, type;
	long ano;
	float balance;
public:
	Bank_account()
	{
		balance=0;
	}
	void getdata()
	{
		cout<<"Enter Name: "; //User Input - Name
		cin>>name;
		cout<<"Enter Account Type: "; //User Input - Account Type
		cin>>type;
		cout<<"Enter Account Number: "; //User Input - Account Number
		cin>>ano;
	}
	void deposit(float deposit)
	{
		balance=balance+deposit; //Calculating Balance
		cout<<"Total Balance: "<<balance<<endl<<endl;
	}
	void withdraw(float withdraw)
	{
		if(balance==0) //If Balance is 0
		{
			cout<<"Your Balance is 0. Cannot Withdraw\n\n";
		}
		else if(balance<withdraw) //If withdrawal amount is more than balance
		{
			cout<<"Insufficient Balance. Cannot Withdraw\n";
			cout<<endl<<"Total Balance: "<<balance<<endl<<endl;
		}
		else
		{
			balance=balance-withdraw; //Calculating Balance
			cout<<"Total Balance: "<<balance<<endl<<endl;
		}
	}
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Account Type: "<<type<<endl;
		cout<<"Account Number: "<<ano<<endl;
		cout<<"Balance: "<<balance<<endl;
		cout<<endl;
	}
};
int main()
{
	cout<<"BANK SYSTEM\n\n";
	
	int ch;
	float deposit,withdraw;
	Bank_account b1;
	b1.getdata();

	cout<<"\n1.Deposit Money\n2.Withdraw Money\n3.Display Data\n4.Exit\n\n";

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
			b1.display();
			break;
		case 4:
			cout<<"Logged Out.\n";
			return 0;
			break;
		default:
			cout<<"Invalid Choice."<<endl;
		}
	}
}