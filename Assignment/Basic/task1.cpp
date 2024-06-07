//WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calculator
{
public:
	void add(int a, int b)
	{
		int ans=a+b; //Addition
		cout<<"Addition: "<<ans<<endl<<endl;
	}
	void subtract(int a, int b)
	{
		int ans=a-b; //Subtraction
		cout<<"Subtraction: "<<ans<<endl<<endl;
	}
	void multiply(int a, int b)
	{
		int ans=a*b; //Multiplication
		cout<<"Multiplication: "<<ans<<endl<<endl;
	}
	void divide(int a, int b)
	{
		if(b==0)
		{
			cout<<"Division not Possible."<<endl;
		}
		else
		{
			float ans=a/b; //Division
			cout<<"Division: "<<ans<<endl<<endl;
		}	
	}
};
int main()
{
	cout<<"SIMPLE CALCULATOR\n\n";

	int a,b,ch;
	calculator c;

	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n\n";

	while(true)
	{
		cout<<"Enter Your Choice: "; //User Input - Choice
		cin>>ch;

		if(ch==5)
		{
			return 0;
		}

		cout<<"Enter A: ";//User Input - Number 1
		cin>>a;
		cout<<"Enter B: ";//User Input - Number 2
		cin>>b;

		switch(ch)
		{
		case 1:
			c.add(a,b);
			break;
		case 2:
			c.subtract(a,b);
			break;
		case 3:
			c.multiply(a,b);
			break;
		case 4:
			c.divide(a,b);
			break;
		default:
			cout<<"Invalid Choice."<<endl;
		}
	}
}