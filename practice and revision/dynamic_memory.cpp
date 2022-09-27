#include<iostream>
using namespace std;
int main()
{
    int *arr;
    int *p = new int (9);
    //cout<<*p<<endl;       //p = address and *p = 9..
    int size,i,j,temp;
    cout<<"enter the size of array to be initilized : ";
    cin>>size;
    arr = new int [size];
    //cout<<*arr<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    for (i=0;i<size;i++)
        for (j=i+1;j<size;j++)
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    for (i=0;i<size;i++)
        cout<<arr[i]<<endl;
    delete []arr;
    return 0;
}