#include<iostream>
using namespace std;
class c2;
class c1
{
    int a;
    public:
    void setvalue(int n1)
    {
        a = n1;
    }
    void display()
    {
        cout<<"\na = "<<a;
    }
    //friend class c2;
    friend void exchange(c1 &c,c2 &d);
};

class c2
{
    int b;
    public:
    void setvalue(int n2)
    {
        b = n2;
    }
    void display()
    {
        cout<<"\nb = "<<b;
    }
    //friend class c1;
    friend void exchange(c1 &c,c2 &d);
};

void exchange(c1 &c,c2 &d)
{
    int temp = c.a;
    c.a = d.b;
    d.b = temp;
}
int main()
{
    c1 a;
    c2 b;
    a.setvalue(3);
    b.setvalue(4);
    exchange(a,b);
    a.display();
    b.display();
    return 0;
}