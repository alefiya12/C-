// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;
class Triangle
{
	int side1,side2,side3;
public:
	Triangle()
	{
		cout<<"Enter Length of Side 1: "; //User Input - Side1
		cin>>side1;
		cout<<"Enter Length of Side 2: "; //User Input - Side2
		cin>>side2;
		cout<<"Enter Length of Side 3: "; //User Input - Side3
		cin>>side3;
	}
	void triangleType()
	{
		if((side1==side2) && (side2==side3))
		{
			cout<<"\nEquilateral Triangle"<<endl;
		}
		else if(side1==side2 || side1==side3 || side2==side3)
		{
			cout<<"\nIsosceles Triangle"<<endl;
		}
		else if(side1!=side2 && side2!=side3)
		{
			cout<<"\nScalene Triangle"<<endl;
		}
		else
		{
			cout<<"\nInvalid Triangle"<<endl;
		}
	}
};
int main()
{
	cout<<"CHECKING TRIANGLE TYPE\n\n";
	
	Triangle triangle;
	triangle.triangleType();
}