#include <iostream>
using namespace std;

class op
{
    int a, b;

public:
    op() {}

    op operator+(const op &o)
    {
        op t;
        t.a = this->a + o.a;
        t.b = this->b + o.b;
        return t;
    }
    void operator--()
    {
        a = --a;
        b = --b;
    }
    op(int o, int p)
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
    op o(1, 2), p(3, 4);
    op oop = o + p; //binary operator...
    --oop; //unary operator...
    oop.display();
    return 0;
}