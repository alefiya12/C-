//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
#include <iostream>
using namespace std;
class Rectangle
{
	int length, width;
public:
	void getData()
	{
		cout<<"Enter Length: "; //User Input - Length
		cin>>length;
		cout<<"Enter Width: "; //User Input - Width
		cin>>width;
		cout<<endl;
	}
	void calculateArea()
	{
		int area=width*length; //Calculating Area
		cout<<"Area of Rectangle: "<<area<<endl;
	}
	void calculatePerimeter()
	{
		int perimeter=2*(length+width); //CAlculating Perimeter
		cout<<"Perimeter of Rectangle: "<<perimeter<<endl;
	}
};
int main()
{
	cout<<"CALCULATING AREA AND PERIMETER OF RECTANGLE.\n\n";

	Rectangle r1;
	r1.getData();
	r1.calculateArea();
	r1.calculatePerimeter();
}