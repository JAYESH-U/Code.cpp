#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=10,b=5;
    cout<<"a = "<<a<<" "<<" b = "<<b<<endl;
    cout<<"after swap : "<<endl;
    swap(a,b);
    cout<<"a = "<<a<<" "<<" b = "<<b<<endl;
}