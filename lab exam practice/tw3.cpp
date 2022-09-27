#include<iostream>
using namespace std;

float area(int s)
{
    return (s*s);
}

float area(float r)
{
    return(3.142*r*r);
}

float area(float bs,float ht)
{
    return(bs*ht);
}

int area(int l,int b)
{
    return(l*b);
}

int main()
{
    int l,b,s;
    float r,bs,ht;
    cout<<"enter the sides of a sqare : ";
    cin>>s;
    cout<<"enter the radius of a circle : ";
    cin>>r;
    cout<<"enter the base and height of a triangle : ";
    cin>>bs>>ht;
    cout<<"enter the base and height of a rectangle : ";
    cin>>l>>b;
    cout<<"the area of a square is : "<<area(s)<<endl;
    cout<<"the area of a circle is : "<<area(r)<<endl;
    cout<<"the area of a triangle is : "<<area(bs,ht)<<endl;
    cout<<"the area of a rectangle is : "<<area(l,b)<<endl;
    return 0;
}