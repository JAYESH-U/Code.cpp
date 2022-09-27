#include<iostream>
using namespace std;

int main()
{
    int *p;
    int a;
    cout<<"enter a number : ";
    cin>>a;
    p=&a;
    cout<<"p : "<<p<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"&p : "<<&p<<endl;
    cout<<"*p : "<<*p<<endl;
    return 0;
}