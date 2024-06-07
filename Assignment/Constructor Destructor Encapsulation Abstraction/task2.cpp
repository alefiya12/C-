// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include <iostream>
using namespace std;
class calculator
{
	int a,b;
public:
	calculator()
	{
		cout<<"Enter A: "; //User Input - Number 1
		cin>>a;
		cout<<"Enter B: "; //User Input - Number 2
		cin>>b;
	}
	int add()
	{
		return a+b; //Addition
		
	}
	int subtract()
	{
		return a-b; //Subtraction
		
	}
	int multiply()
	{
		return a*b; //Multiplication
		
	}
	flo divide()
	{
		if(b==0)
		{
			return 0;
		}
		else
		{
			return a/b;	//Division	
		}	
	}
};
int main()
{
	cout<<"CALCULATOR\n\n";

	calculator c;
		
	cout<<"\nAddition: "<<c.add()<<endl;
	cout<<"Subtraction: "<<c.subtract()<<endl;
	cout<<"Multication: "<<c.multiply()<<endl;
	cout<<"Division: "<<c.divide()<<endl;
}