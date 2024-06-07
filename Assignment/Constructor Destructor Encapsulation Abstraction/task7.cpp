// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
// Include member functions to set and get these variables, as well as to validate if the date is valid.
#include <iostream>
using namespace std;
class Date
{
	int day,month,year;
public:
	void getDate()
	{
		cout<<"Enter Day: "; //User Input - Day
		cin>>day;
		cout<<"Enter Month: "; //User Input - Month
		cin>>month;
		cout<<"Enter Year: "; //User Input - Year
		cin>>year;
	}

	void validateDate()
	{
		int leap;
		if(year>=1 && year<=9999)
		{
			if(month==2)
			{
				if((year%4==0 && year%100!=0) || (year%400==0))
				{
					leap=29;
				}
				else
				{
					leap=28;
				}

				if(day<0 ||  day>leap)
				{
					cout<<"\nInvalid Day."<<endl;
					return;
				}
				else
				{
					cout<<"\nValid Date. "<<day<<"/"<<month<<"/"<<year<<endl;
					return;
				}
			}
			else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			{
				if(day<0 || day>31)
				{
					cout<<"\nInvalid Day."<<endl;
					return;
				}
				else
				{
					cout<<"\nValid Date. "<<day<<"/"<<month<<"/"<<year<<endl;
					return;
				}
			}
			else if(month==4 || month==6 || month==9|| month==11)
			{
				if(day<0 || day>30)
				{
					cout<<"\nInvalid Day."<<endl;
					return;
				}
				else
				{
					cout<<"\nValid Date. "<<day<<"/"<<month<<"/"<<year<<endl;
					return;
				}
			}
			else
			{
				cout<<"\nInvalid Month."<<endl;
				return;
			}
		}
		else
		{
			cout<<"\nInvalid Year."<<endl;
			return;
		}		
	}
};
int main()
{
	cout<<"CHECKING DATE VALIDITY\n\n";
	
	Date d;
	d.getDate();
	d.validateDate();
}