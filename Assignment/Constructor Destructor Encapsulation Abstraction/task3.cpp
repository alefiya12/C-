// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables.
#include <iostream>
using namespace std;
class Car
{
	string company,model;
	int year;
public:
	void setData()
	{
		cout<<"Enter Car Company: "; //User Input - Car Company
		cin>>company;
		cout<<"Enter Car Model: "; //User Input - Car Model
		cin>>model;
		cout<<"Enter Car Year: "; //User Input - Car Year
		cin>>year;
	}
	void getData()
	{
		cout<< "Car Company: "<<company<<endl;
        cout<< "Car Model: "<<model<<endl;
        cout<< "Car Year: "<<year<<endl;
	}
};
int main()
{
	cout<<"CAR DETAILS\n\n";

	Car myCar;

	myCar.setData();
	cout<<endl;
	myCar.getData();
}