//Write a Program of Two 1D Matrix Addition
#include <iostream>
using namespace std;
int main()
{
	cout<<"ADDITION OF TWO ARRAYS\n\n";

	int arr1[5]={8,5,6,2,9}, arr2[5]={5,2,8,2,5}, arr3[5],i;

	for(i=0;i<5;i++) //Addition of 2 arrays
	{
		arr3[i]=arr1[i]+arr2[i];
	}

	cout<<"Array A"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl<<endl;

	cout<<"Array B"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<endl<<endl;

	cout<<"Addition of two Arrays"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<endl;
}