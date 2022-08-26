#include<iostream>
using namespace std;
class ptr
{
    int a,b,c;
    public:
    void setdata(int i,int j)
    {
        a = i;
        b = j;
        c = 0;
    }
    void printdata()
    {
        cout<<"a : "<<a<<" b : "<<b<<" c : "<<c<<endl;
    }
    void setdata(int c)
    {
        a = 0;
        b = 0;
        this -> c = c;
    }
};
int main()
{
    ptr a,a1;
    a.setdata(20,30);
    a1.setdata(40);
    a.printdata();
    a1.printdata();
    return 0;
}