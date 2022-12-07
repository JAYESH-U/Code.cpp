#include<iostream>
using namespace std;
int sum (int a, int b)
{
    return a+b;
}
int sum (int a, int b, int c)
{
    return a+b+c;
}
float vol(int a)
{
    return a*a*a;
}
float vol(int l, int b, int h)
{
    return l*b*h;
}
float vol(int r, int h)
{
    return (3.142*r*r*h);
}

int main()
{
    cout<<"the sum of 3 and 6 is : "<<sum(3,6)<<endl;
    cout<<"the sum of 3 ,7 and 6 is : "<<sum(3,6,7)<<endl;
    cout<<"the volume of cuboid of 3 ,7 and 6 is : "<<vol(3,6,7)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is : "<<vol(3,6)<<endl;
    cout<<"the volume of cube of side 3 is : "<<vol(3)<<endl;
    cout<<endl;
    return 0;
}