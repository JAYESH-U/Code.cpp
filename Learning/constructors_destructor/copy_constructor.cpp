#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number ()
    {
        a = 0;
    }

    number (int x)
    {
        a = x;
    }

    //when no copy constructor is found , compiler supplies its own copy constructor..
    number (number &obj)
    {
        cout<<"\ncomy constructor called >>>>> ";
        a = obj.a;
        cout<<"\n";
    }

    void display()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    number x, y, z(21),z2;

    x.display();
    y.display();
    z.display();

    cout<<"\n";

    number z1(z);       //copy constructor is called....
    z1.display();

    cout<<endl;

    z2 = z;             //copy constructor is not called because we are only assigning the objects to another object
    z2.display();

    number z3 = z;      //copy constructor is called...
    z3.display();

    return 0;
}