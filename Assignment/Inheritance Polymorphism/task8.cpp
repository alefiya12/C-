//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading
#include <iostream>
using namespace std;

class MathOperations
{
public:
    int operation(int a,int b,int c)
    {
    	return a+b+c;
    }
    int operation(int a,int b)
    {
    	return a-b;
    }
    double operation(double a, double b)
    {
    	return a*b;
    }
    long operation(long a,long b)
    {
    	if(b!=0)
    	{
    		return a/b;
    	}
    	else
    	{
    		return 0;
    	}
    }
};
int main()
{
    cout<<"SIMPLE CALCULATOR USING FUNCTION OVERLOADING\n\n";
    
    MathOperations math;

    int int1=10, int2=5, int3=6;
    double double1 = 10.5, double2 = 2.5;
    long long1=10, long2=5;

    cout<<"Addition of "<<int1<<", "<<int2<<" and "<<int3<<" = "<<math.operation(int1, int2, int3)<<endl;
    cout<<"Subtraction of "<<int1<<" and "<<int2<<" = "<<math.operation(int1, int2)<< endl;
    cout<<"Multiplication of "<<double1<<" and "<<double2<<" = "<<math.operation(double1, double2)<<endl;
    cout<<"Division of "<<long1<<" and "<<long2<<" = "<<math.operation(long1, long2)<<endl;
}