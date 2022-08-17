#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size,i;
	cout<< "Enter the size of array : ";
	cin>>size;
	cout<<"Creating an array of size : "<< size<<endl;
	arr=new int[size];
	cout<<"Dynamic memory allocation is successful"<<endl;
	cout<<"enter the elements of array : ";
	for (i=0;i<size;i++)
		cin>>arr[i];		//cin>>*(arr+i);
		cout<<"the elements of array are : ";
	for (i=0;i<size;i++)
		cout<<*(arr+i)<<" ";
	delete []arr;
	cout<<"\nmemory allocated has been released..";
    return 0;
}
