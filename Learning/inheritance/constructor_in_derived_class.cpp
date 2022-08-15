/*
case 1:
class B: public A
{
    //order of executiom of constructor...
    first A() then B()
};

case 2:
class B: public A, public C
{
    //order of executiom of constructor...
    first b() then c() then A()
};

case 3:
class A: public B, virtual public C
{
    //order of executiom of constructor...
    first C() then B() then A()
    //here C() is a virtual base class so it executes first...
};
*/
#include <iostream>

using namespace std;

class base1
{
    int a;

public:
    base1(int i)
    {
        a = i;
        cout << "base1 class constructor is called.." << endl;
    }
    void printdata_a()
    {
        cout << "the value of a is : " << a << endl;
    }
};

class base2
{
    int b;

public:
    base2(int i)
    {
        b = i;
        cout << "base2 class constructor is called.." << endl;
    }
    void printdata_b()
    {
        cout << "the value of b is : " << b << endl;
    }
};

// if -> class derived : public base1, public base2  -> then base1 costructor is called first...
class derived : public base2, public base1
// to initialize bse 2 first, we should declare base 2 first and same below as well...
{
    int c, d;

public:
    // derived(a,b,c,d): base1(a),base2(b){}
    derived(int k, int l, int m, int n) : base2(l), base1(k) // base2 is inititalized first.
    {
        c = m;
        d = n;
        cout << "derived class constructr is called.." << endl;
    }
    void printdata_cd()
    {
        cout << "the value of c is : " << c << endl
             << "the value of d is : " << d << endl;
    }
};

int main()
{
    derived d(1, 2, 3, 4);
    d.printdata_a();
    d.printdata_b();
    d.printdata_cd();
    return 0;
}