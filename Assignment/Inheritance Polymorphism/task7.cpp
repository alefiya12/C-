//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<"This is Parent Class A.\n";
	}
};
class B: public A
{
public:
	B()
	{
		cout<<"This is Class B Derived from Class A.\n";
	}
};
class C: public B
{
public:
	C()
	{
		cout<<"This is Class C Derived from Class B.\n";
	}
};
int main()
{
	cout<<"USE OF CONSTRUCTORS IN MULTILEVEL INHERITANCE\n\n";

	cout<<"Accessed with Object of Class C\n";
	C c1; //will call all the constructors due to multilevel inheritance
}