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
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(array_pointer[i]>array_pointer[j])
            {
                int temp;
                temp=array_pointer[i];
                array_pointer[i]=array_pointer[j];
                array_pointer[j]=temp;
            }
    for(int i=0;i<n;i++)
        cout<<array_pointer[i]<<' ';
    return 0;
}