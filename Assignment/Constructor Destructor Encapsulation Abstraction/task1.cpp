// Write a program to find the multiplication values and the cubic values using inline function
#include <iostream>
using namespace std;
inline int multiply(int a, int b)
{
    return a*b;
}

inline int cubic(int a)
{
    return a*a*a;
}

int main()
{
    cout<<"MULTIPLICATION AND CUBIC VALUES OF A NUMBER\n\n";

    int num1,num2;

    cout<<"Enter Number 1: "; //User Input - Number 1
    cin>>num1;
    cout<<"Enter Number 2: "; //User Input - Number 2
    cin>>num2;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is: "<<multiply(num1,num2)<<endl;

    cout<<"\nEnter a number to find its cubic value: "; //User Input - Number
    cin>>num1;
    cout<<"Cubic value of "<<num1<<" is: "<<cubic(num1)<<endl;
}