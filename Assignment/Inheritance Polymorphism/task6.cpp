//Write a C++ Program to show access to Private Public and Protected using Inheritance
#include <iostream>
using namespace std;
class A
{
private:
	void fun1a()
	{
		cout<<"Private Section of Class A."<<endl;
	}
protected:
	void fun2a()
	{
		cout<<"Protected Section of Class A."<<endl;
	}
public:
	void fun3a()
	{
		cout<<"Public Section of Class A."<<endl;
	}
	void accessPrivateProtected() 
	{
        fun1a(); //Private member can be accessed within the class only
        fun2a(); //Protected member can be accessed within the class & in derieved class
    }
};
class B: public A
{
public:
	void fun()
	{
		cout<<"Public Section of Class B."<<endl;
	}
	void accessProtected() //Protected member can be accessed in derieved class
	{
		//fun1a() //Error: 'fun1a' is a private member of 'A' and are accessible within the same class & not in derieved class
        fun2a();
    }
};
int main()
{
	cout<<"SHOWING ACCESS OF PRIVATE, PUBLIC & PROECTED USING INHERITANCE\n\n";
	cout<<"Accessed with Object of Class A\n";
	A a;
	//a.fun1a(); //Error: 'fun1a' is a private member of 'A' and are accessible within the same class
	//a.fun2a(); //Error: 'fun1a' is a protected member of 'A' and are accessible within the same class and by derieved class
	a.fun3a(); //'fun3a' is a public member of 'A'
	a.accessPrivateProtected(); //Accessing private & protected member function through a public member function

	cout<<"\nAccessed with Object of Class B\n";
	B b;
	//b.fun1a(); //Error: 'fun1a' is a private member of 'A'
	//b.fun2a(); //Error: 'fun2a' is a protected member of 'A'
	b.fun(); //'fun' is a public member of 'B'
	b.fun3a(); //'fun3a' is a public member of 'A'
	b.accessProtected(); // Accessing protected member function through a public member function of derived class
}