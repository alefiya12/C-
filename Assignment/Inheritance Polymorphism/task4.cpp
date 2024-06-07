//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    void inputPersonalData()
   {
        cout<<"Enter Name: "; //User Input - Name
        cin>>name;
        cout<<"Enter Age: "; //User Input - Age
        cin>>age;
    }
    void displayPersonalData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Academic
{
    int rollNumber;
    float marks[5];
public:
    void inputAcademicData()
    {
        cout<<"Enter Roll Number: "; //User Input - Roll Number
        cin>>rollNumber;
        cout<<"Enter Marks for 5 Subjects: "<<endl; //User Input - Marks
        for(int i=0;i<5;i++)
        {
            cout<<"Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void displayAcademicData()
    {
        cout<<"Roll Number: "<<rollNumber<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Marks in Subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
    float calculateTotalMarks()
    {
        float total=0;
        for(int i=0;i<5;i++)
        {
            total+=marks[i]; //Calculating MArks
        }
        return total;
    }
    float calculatePercentage()
    {
        return calculateTotalMarks()/5; //Calculating percentage
    }
};

class Student: public Person, public Academic
{
public:
    void inputData()
    {
        inputPersonalData();
        inputAcademicData();
    }

    void displayData()
    {
        displayPersonalData();
        displayAcademicData();
        cout<<"Total Marks: "<<calculateTotalMarks()<<endl;
        cout<<"Percentage: "<<calculatePercentage()<<"%"<<endl;
    }
};
int main()
{
    cout<<"STUDENT MARK SHEET FOR 5 SUBJECTS\n\n";
    Student student;
    student.inputData();
    cout<<"\nStudent Mark Sheet"<<endl;
    student.displayData();
}