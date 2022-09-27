#include<iostream>
using namespace std;
void swap(int*a,int*b,int*c)
{
    int temp = *a;
    *a=*b;
    *b=*c;
    *c=temp;
}
int main()
{
    int a=10,b=20,c=30;
    cout<<"before swap a,b,c : "<<a<<" "<<b<<" "<<c<<endl;
    swap(&a,&b,&c);
    cout<<"after swap a,b,c : "<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}