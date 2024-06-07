// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
// Include member functions to calculate and set salary based on employee performance. Using of constructor
#include <iostream>
using namespace std;
class Employee
{
	string name,empid;
	int salary;
public:
	Employee()
	{
		cout<<"Enter Employee Name: "; //User Input - Employee Name
		cin>>name;
		cout<<"Enter Employee ID: "; //User Input - Employee ID
		cin>>empid;
		cout<<"Enter Salary: "; //User Input - Employee Salary
		cin>>salary;
	}
	void getData()
	{
		cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Salary: $"<<salary<<endl;
	}
 	void setSalaryBasedOnPerformance(char performanceGrade)
 	{
        float increment;
        switch (performanceGrade)
        {
            case 'A':
                increment = 0.20; // 20% increment for grade A
                break;
            case 'B':
                increment = 0.10; // 10% increment for grade B
                break;
            case 'C':
                increment = 0.05; // 5% increment for grade C
                break;
            default:
                increment = 0.0; // No increment for other grades
                cout << "Invalid grade. No increment applied." << endl;
        }
        salary += salary * increment;
    }
};
int main()
{
    cout<<"CALCULATING SALARY\n\n";

    Employee emp;
    char performanceGrade;

    cout<<"\nInitial Employee Details:"<<endl;
    emp.getData();
    cout<<endl;

    cout<<"Enter performance grade (A, B, C): "; //User Input - Performance Grade
    cin>>performanceGrade;

    emp.setSalaryBasedOnPerformance(performanceGrade);

    cout << "\nUpdated Employee Details:" << endl;
    emp.getData();
}