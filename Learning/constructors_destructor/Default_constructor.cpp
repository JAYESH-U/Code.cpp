#include<iostream>
using namespace std;

class construct
{
    int a,b;
    public:
    void print()
    {
        cout<<"a = "<<a<<"\nb = "<<b;
    }
    construct();    //costructor declaration...
};
      
//constructor definition...[it invoked automatically whenever the object is created]..
//it consists same name as a class..
//no return type is required..

construct :: construct()  //----> default constructor as it accepts no arguements..
{
    a = 10;
    b = 20;
}

int main()
{
    construct c;
    c.print();
    return 0;
}

/*

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address

*/