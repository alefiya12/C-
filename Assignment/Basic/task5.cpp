//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include <iostream>
using namespace std;
class Person
{
	string name,country;
	int age;
public:
	void setData()
	{
		cout<<"Enter Your Name: "; //User Input - Name
		cin>>name;
		cout<<"Enter Your Country: "; //User Input - Country
		cin>>country;
		cout<<"Enter Your Age: "; //User Input - Age
		cin>>age;
	}
	void getData()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Country: "<<country<<endl;
		cout<<"Age: "<<age<<endl;
	}
};
int main()
{
	cout<<"DETAILS OF A PERSON\n\n";
	
	Person p1;
	p1.setData();
	p1.getData();
}