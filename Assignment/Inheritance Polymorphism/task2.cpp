//Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>
using namespace std;
class Shape
{
protected:
    float width, height;
public:
    void inputDimensions()
    {
        cout<<"Enter width: "; //User Input - Width 
        cin>>width;
        cout<<"Enter height: "; //User Input - Height
        cin>>height;
    }
};
class Rectangle: public Shape
{
public:
    float calculateArea()
    {
        return width*height;
    }

    void displayArea()
    {
        cout<<"\nArea of the rectangle: "<<calculateArea()<<endl;
    }
};

int main()
{
    cout<<"FIND AREA OF RECTANGLE\n\n";

    Rectangle rect;
    rect.inputDimensions();
    rect.displayArea();
}
