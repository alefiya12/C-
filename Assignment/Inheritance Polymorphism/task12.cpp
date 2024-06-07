//Write a program to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;
class Number
{
public:
	int a,b;
    Number()
    {
    	cout<<"Enter Number 1: "; //User Input - Numbner 1 
   		cin>>a;
   		cout<<"Enter Number 2: "; //User Input - Numbner 2
   		cin>>b;
    }
    friend void swapNum(Number &n);
};
void swapNum(Number &n)
{
	cout<<"\nBefore Swaping: "<<endl<<"A: "<<n.a<<" B: "<<n.b<<endl;

	n.a=n.a+n.b; //Swapping two numbers
	n.b=n.a-n.b;
	n.a=n.a-n.b;

	cout<<"\nAfter Swaping: "<<endl<<"A: "<<n.a<<" B: "<<n.b<<endl;
}
int main()
{
	cout<<"SWAPING TWO NUMBERS\n\n";

	Number n;
	swapNum(n);
}