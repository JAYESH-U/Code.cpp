#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size,i;
	cout<< "Enter the size of array ";
	cin>>size;
	cout<<"Creating an array of size "<< size<<endl;
	arr=new int[size];
	cout<<"Dynamic memory allocation is successful"<<endl;
	delete []arr;
    return 0;
}
