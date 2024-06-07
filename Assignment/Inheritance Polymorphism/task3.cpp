//Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. 
//Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
#include <iostream>
using namespace std;
class person
{
protected:
	string name;
	int age;
public:
    void inputPersonData()
    {
        cout<<"Enter Name: "; //User Input - Name
        cin>>name;
        cout<<"Enter Age: "; //User Input - Age
        cin>>age;
    }

    void displayPersonData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student: public person
{
	float percentage;
public:
    void inputStudentData()
    {
       inputPersonData();
        cout<<"Enter Percentage: "; //User Input - Percentage
        cin>>percentage;
    }

    void displayStudentData()
    {
        displayPersonData();
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};
class Teacher: public person
{
	int salary;
public:
    void inputTeacherData()
    {
        inputPersonData();
        cout<<"Enter Salary: "; //User Input - Salary
        cin>>salary;
    }

    void displayTeacherData()
    {
        displayPersonData();
        cout<<"Salary: $"<<salary<<endl;
    }
};
int main()
{
    cout<<"STUDENT AND TEACHERS DETAILS\n\n";

	Student stu;
    Teacher teach;

    cout<<"Enter Student Details"<<endl;
    stu.inputStudentData();
    cout<<"\nStudent Details:"<<endl;
    stu.displayStudentData();

    cout<<"\nEnter Teacher Details"<<endl;
    teach.inputTeacherData();
    cout<<"\nTeacher Details:"<<endl;
    teach.displayTeacherData();
}