#include<iostream>
#include<algorithm>
using namespace std;
// Function Objects (Functor) : 
// A function wrapped in a class so that it is available like an object.

int main()
{
    int arr[] = {1,3,4,2,54,77,6};
    sort(arr,arr+7);    //sorting until 6 elements ascending order.
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int brr[] = {1,3,4,2,54,77,6};
    sort(brr,brr+5,greater<int>());    //sorting until 5 elements,in desending order (greater element first).
    for(int i=0;i<7;i++)
    {
        cout<<brr[i]<<" ";
    }
    return 0;
}