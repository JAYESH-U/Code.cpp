// it's just to understand...
//multilevel inheritance....
#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;

public:
    void setdata()
    {
        a = 10;
        b = 20;
    }

    int getdata1()
    {
        return b;
    }

    void display1()
    {
        setdata();
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

/*
For a protected member :
                            public derivation   private derivation  protected derivation
    1.private members       not inherited       not inherited       not inherited
    2.protected members     protected           private             protected
    3.public members        public              private             protected
*/

class derived : protected base
{
public:     //protected....
    void display()
    {
        setdata();
        cout << "a = " << a << endl;
        cout << "b = " << getdata1() << endl;
    }
};

class derivedagain : public derived
{
public:     //public...
    void getdata()
    {
        display();
    }
};

int main()
{
    base b;
    derived d;
    // error cout<<b.a<<endl;    protected
    // error cout<<b.b<<endl;    private
    // d.setdata();      private
    // d.getdata();      private
    derivedagain da;
    da.getdata();
    return 0;
}