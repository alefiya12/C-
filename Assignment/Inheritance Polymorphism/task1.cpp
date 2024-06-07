//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance.
//Member functions input data, calculate average runs, Display data. (Single Inheritance)
#include <iostream>
using namespace std;
class Cricketer
{
	string name;
    int age;
public:
    void inputCricketerData()
    {
        cout<<"Enter Cricketer Name: "; //User Input - Cricketer Name
        cin>>name;
        cout<<"Enter Cricketer Age: "; //User Input - Cricketer Age
        cin>>age;
    }

    void displayCricketerData()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Batsman: public Cricketer
{
	int totalRuns, averageRuns, bestPerformance;
public:
	public:
    void inputData()
    {
        inputCricketerData();
        cout<<"Enter Total Runs: "; //User Input - Total Runs
        cin>>totalRuns;
        cout<<"Enter Best Performance: "; //User Input - Best Performance
        cin>>bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns()
    {
        int innings;
        cout<<"Enter Number of Innings: "; //User Input - Innings
        cin>>innings;
        if(innings>0)
        {
            averageRuns=(totalRuns)/innings; //Calculating Average Runs
        }
        else
        {
            averageRuns=0;
        }
    }

    void displayData()
    {
        displayCricketerData();
        cout<<"Total Runs: "<<totalRuns<<endl;
        cout<<"Average Runs: "<<averageRuns<<endl;
        cout<<"Best Performance: "<<bestPerformance<<endl;
    }

};
int main()
{
    cout<<"CALCULTAING AVERAGE CRICKETER RUNS\n\n";

	Batsman b1;
	b1.inputData();
	b1.displayData();
}