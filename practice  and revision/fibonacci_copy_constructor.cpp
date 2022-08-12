#include<iostream>
using namespace std;

class fibonacci
{
private:
    unsigned long int f,f1,f2;
public:
    fibonacci ()
    {
        f = 0;
        f1 = 1;
        f2 = f + f1;
    }
    fibonacci(fibonacci &ptr)
    {
        f = ptr.f;
        f1 = ptr.f1;
        f2 = ptr.f2;
    }
    void increment()
    {
        f = f1;
        f1 = f2;
        f2 = f + f2;
    }
    void display()
    {
        cout<< f2 <<"\t";
    }
};

int main()
{
    fibonacci n;
    for (int i = 0; i <= 15; i++)
    {
        n.display();
        n.increment();
    }
    return 0;
}