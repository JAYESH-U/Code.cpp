#include<iostream>
using namespace std;
class calculator;
class complex
{
    int a,b;
    public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnumber()
    {
        cout<<"your number is "<<a<<"+ i"<<b;
    }
    friend class calculator;
};
class calculator
{
    public:
    int sumRealcomplex(complex o1, complex o2)
    {
        return (o1.a+o2.a);
    }
    int sumcompComplex(complex o1,complex o2)
    {
        return (o1.b + o2.b);
    }
};
int main()
{
    class complex c1,c2;
    c1.setnumber(1,2);
    c2.setnumber(3,4);
    class calculator ca1;
    int resr = ca1.sumRealcomplex(c1,c2);
    int resc = ca1.sumcompComplex(c1,c2);
    cout<<"sum of complex number is "<<resr<<" + i"<<resc;
    return 0;
}