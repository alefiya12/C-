//Write a program to find the max number from given two numbers using friend function
#include <iostream>
using namespace std;
class Number
{
public:
    int num1, num2;
    Number()
    {
    	cout<<"Enter Number 1: "; //User Input - Numbner 1
   		cin>>num1;
   		cout<<"Enter Number 2: "; //User Input - Numbner 2
   		cin>>num2;
    }
    friend int findMax(Number &n);
};
int findMax(Number &n)
{
    return (n.num1>n.num2)?n.num1:n.num2; //Finding max number
}
int main()
{
    cout<<"FINDING MAXIMUM NUMBER\n\n";

    Number n;

    int max = findMax(n);
    cout<<"\nThe maximum number is: "<<max<<endl;
}