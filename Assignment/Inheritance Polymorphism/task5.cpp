//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number.
//Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test.
//The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>
using namespace std;
class Students
{
    int rollNumber;
public:
    void setRollNumber(int roll)
    {
        rollNumber=roll;
    }

    void displayRollNumber()
    {
        cout<<"Roll Number: "<<rollNumber<< endl;
    }
};

class Test : public Students
{
protected:
    float subject1, subject2;
public:
    void setMarks(float s1, float s2)
    {
        subject1=s1;
        subject2=s2;
    }
    void displayMarks()
    {
        cout<<"Marks in Subject 1: "<<subject1<<endl;
        cout<<"Marks in Subject 2: "<<subject2<<endl;
    }
};

class Result: public Test
{
public:
    void displayResult()
    {
        float total = subject1 + subject2;
        displayRollNumber();
        displayMarks();
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main()
{
    cout<<"STUDENT DETAILS\n\n";
    Result student;
    student.setRollNumber(101); //Parameterized Objects
    student.setMarks(85.5, 90.0);
    student.displayResult();
}