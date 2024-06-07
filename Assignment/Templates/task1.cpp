// Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &x, T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
    cout<<"SWAPING VALUES\n\n";
    
	int a=5, b=8;
    cout<<"Before Swapping"<<endl;
    cout<<"a: "<<a<<", b: "<<b<<endl;
    swapValues(a,b);
    cout<<"After Swapping"<<endl;
    cout<<"a: "<<a<<", b: "<<b<<endl;

    double c=58.55, d=95.32;
    cout<<"\nBefore Swapping"<<endl;
	cout << "c: " << c << ", d: " << d << endl;
    swapValues(c, d);
    cout << "After Swapping" << endl;
    cout << "c: " << c << ", d: " << d << endl;
}