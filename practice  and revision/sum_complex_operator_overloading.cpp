#include<iostream>
using namespace std;

class complex
{
    int r ,i;
    public:
    complex(int r,int i)
    {
        this -> r = r;
        this -> i = i;
    }
    complex(){}
    complex operator + (complex &a)
    {
        complex temp;
        temp.r = this -> r + a.r;
        temp.i = this -> i + a.i;
        return temp;
    }
    void printcomplex()
    {
        cout<<"a + ib : "<<r<<" + i"<<i<<endl;
    }
};

int main()
{
    complex a(2,3),b(4,5);
    complex c = a + b;
    c.printcomplex();
    return 0;
}