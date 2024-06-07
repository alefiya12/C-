//Write a program to concatenate the two strings using Overloading
#include <iostream>
using namespace std;
class myString
{
public:
	void concateString(string s1,string s2)
	{
		string s3=s1+s2; // Concatenate s1 and s2
		cout<<"Concatenated String: "<<s3<<endl;
	}
	void concateString(string s1,string s2, string s3)
	{
		string s4=s1+s2+s3; // Concatenate s1 and s2
		cout<<"Concatenated String: "<<s4<<endl;
	}
};
int main()
{
	cout<<"CONCATING 2 STRINGS USING FUNCTION OVERLOADING\n\n";
	
	myString s;
	string s1="Hello ", s2="World!", s3=" Good Morning!";
    s.concateString(s1,s2);
    s.concateString(s1,s2,s3);
}