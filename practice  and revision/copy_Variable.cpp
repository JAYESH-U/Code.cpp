// copy constructor...

#include <iostream>

using namespace std;

class var
{
    int a, b;

public:
    var(var &o)
    {
        a = o.a;
        b = o.b;
    }
    var()
    {
    }
    var(int o, int p)
    {
        a = o;
        b = p;
    }
    void display()
    {
        cout << "a : " << a << " b : " << b << endl;
    }
};
int main()
{
    var v1(1, 2);
    var v2 = v1;
    v1.display();
    v2.display();
}