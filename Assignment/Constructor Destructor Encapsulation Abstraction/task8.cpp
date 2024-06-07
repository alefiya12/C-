// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
// Include member functions to calculate the grade based on the marks and display the student's information.
// Accept address from each student implement using of aggregation
#include <iostream>
using namespace std;
class Address
{
    string city;
    int zipCode;
public:
    Address()
    {
        cout<<"Enter City: "; //User Input - City
        cin>>city;
        cout<<"Enter Zipcode: "; //User Input - Zipcode
        cin>>zipCode;
    }
    void displayAddress()
    {
        cout<<"Address: "<<city<<", "<<zipCode<<endl;
    }
};
class Student
{
	string name, studentClass;
	int roll, marks;
    Address address; //Aggregation: Student has an Address
public:
    Student()
    {
        cout<<"Enter Name: "; //User Input - Name
        cin>>name;
        cout<<"Enter Class: "; //User Input - Class
        cin>>studentClass;
        cout<<"Enter Roll Number: "; //User Input - Roll Number
        cin>>roll;
        cout<<"Enter Marks: "; //User Input - Marks
        cin>>marks;
    }
    char calculateGrade() //Calculating Grade
    {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }
    void displayInfo()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Class: "<<studentClass<<endl;
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<calculateGrade()<<endl;
        address.displayAddress();        
    }
};

int main()
{
    cout<<"CALCULATING GRADE\n\n";
    
    Student stu;
    stu.calculateGrade();
    stu.displayInfo();
}