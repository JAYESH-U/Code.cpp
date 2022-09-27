#include <iostream>
using namespace std;
int main()
{
    int *arr;
    int l, s, n, sum=0;
    cout << "enter the number of array elements : ";
    cin >> n;
    arr = new int[n];
    cout << "enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    l = arr[0];
    s = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (l < arr[i])
            l = arr[i];
        if (s > arr[i])
            s = arr[i];
    }
    cout<<"sum of all the elements are : "<<sum<<endl;
    cout<<"largest element is : "<<l<<endl;
    cout<<"smallest element is : "<<s<<endl;
}