//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include <iostream>
using namespace std;
class circle
{
	int radius;
	const float pi=3.14;
public:
	void getData()
	{
		cout<<"Enter Radius: "; //User Input - Radius
		cin>>radius;
		cout<<endl;
	}
	void calculateArea()
	{
		float area=pi*radius*radius; //Calculating Area
		cout<<"Area of Circle: "<<area<<endl;
	}
	void calculateCircumference()
	{
		float circumference=2*pi*radius; //Calculating circumference
		cout<<"Circumference of Circle: "<<circumference<<endl;
	}
};
int main()
{
	cout<<"CALCULATING AREA AND CIRCUMFERENCE OF CIRCLE.\n\n";
	
	circle c1;
	c1.getData();
	c1.calculateArea();
	c1.calculateCircumference();
}