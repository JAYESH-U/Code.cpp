#include<iostream>
using  namespace std;

int main()
{
    int n;
    int *array_pointer;
    cout<<"enter the number of elements of array : ";
    cin>>n;
    array_pointer=new int [n]; //allocates memory for total array elements
    cout<<"enter the array elements : ";
    for(int i=0;i<n;i++)
        cin>>array_pointer[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(array_pointer[j]>array_pointer[j+1])
            {
                int temp;
                temp=array_pointer[j];
                array_pointer[j]=array_pointer[j+1];
                array_pointer[j+1]=temp;
            }
    for(int i=0;i<n;i++)
        cout<<array_pointer[i]<<' ';
    return 0;
}