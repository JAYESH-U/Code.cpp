#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printdata()
    {
        cout<<"\ncomplex number is : "<<a<<" + "<<b<<"i";
    }
};

int main()
{
    complex c1,c2,c3;
    c1 = complex();     //explicit call...
    c1.printdata();

    c2 = complex(2);
    c2.printdata();
                        //complex c1(3,4); --> implicit call...
    c3 = complex(3,4);
    c3.printdata();
    return 0;
}