#include<iostream>
using namespace std;

class numbers
{
    int a,b,c;
    public:
    numbers(int x,int y = 2,int z = 3)
    {
        a = x;
        b = y;
        c = z;
    }
    void printnumber()
    {
        cout<<"numbers are :  a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    }
};

int main()
{
    numbers n1(4,5,6),n2(4,5),n3(4);
    n1.printnumber(); // 4,5,6
    n2.printnumber(); // 4,5,3
    n3.printnumber(); // 4,2,3
    return 0;
}