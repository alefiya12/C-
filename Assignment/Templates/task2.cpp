// Write a program of to sort the array using templates
#include <iostream>
using namespace std;
template <typename T>
void sortArray(T arr[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	cout<<"SORTING ARRAYS\n\n";
	
	int arr[5]={5,2,6,5,9},i;
	cout<<"Before Sorting"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}

	sortArray(arr);

	cout<<"\nAfter Sorting"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	float arr1[5]={5.4,8.6,2.8,4.5,5.8};
	cout<<"\n\nBefore Sorting"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr1[i]<<"  ";
	}

	sortArray(arr1);

	cout<<"\nAfter Sorting"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr1[i]<<"  ";
	}
	cout<<endl;
}