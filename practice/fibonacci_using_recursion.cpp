#include<iostream>
using namespace std;

int fib(int a)
{
    if (a==1 || a==0)
       return 1;
    else
        return fib(a-2) + fib(a-1); 
}
int main()
{
    int n;
    cout<<"enter the value of position of fibonacci number : ";
    cin>>n;
    cout<<"the number at the position of "<<n<<" is : "<<fib(n);
    return 0;
}