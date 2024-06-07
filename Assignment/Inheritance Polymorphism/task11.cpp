//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area
#include <iostream>
using namespace std;
double calculateArea(int length, double breadth)
{
    return length * breadth;
}
double calculateArea(double base, double height)
{
    return 0.5 * base * height;
}
double calculateArea(double radius)
{
    double Pi = 3.14159;
    return Pi * radius * radius;
}
int main()
{
    cout<<"CALCULATE AREA OF RECTANGLE, TRIANGLE, & CIRCLE\n\n";

    int length;
    double breadth, base, height, radius;

    // Area of Rectangle
    cout<<"Enter Length of Rectangle: "; //User Input - Length of Rectangle
    cin>>length;
    cout<<"Enter Breadth of Rectangle: "; //User Input - Breadth of Rectangle
    cin>>breadth;
    cout<<"Area of Rectangle: "<<calculateArea(length, breadth)<<endl; //Calculate Area

    // Area of Triangle
    cout<<"\nEnter Base of Triangle: "; //User Input - base of Triangle
    cin>>base;
    cout<<"Enter Height of Triangle: "; //User Input - Height of Triangle
    cin>>height;
    cout<<"Area of Triangle: "<<calculateArea(base, height)<<endl; //Calculate Area

    // Area of Circle
    cout<<"\nEnter Radius of Circle: "; //User Input - Radius of Circle
    cin>>radius;
    cout<<"Area of Circle: "<<calculateArea(radius)<<endl; //Calculate Area 
}