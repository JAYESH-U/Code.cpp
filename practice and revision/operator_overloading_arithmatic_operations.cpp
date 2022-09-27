#include<iostream>
using namespace std;

class arithmatic
{
private:
    float n;
public:
    void get()
    {
        cout<<"enter a number : ";
        cin>>n;
    }
    arithmatic operator + (arithmatic &a)
    {
        arithmatic t;
        t.n = this -> n + a.n;      //t.n = n + a.n;      
        return t;
    }
    arithmatic operator - (arithmatic &a)
    {
        arithmatic t;
        t.n = this -> n - a.n;      //t.n = n - a.n;
        return t;
    }
    arithmatic operator * (arithmatic &a)
    {
        arithmatic t;
        t.n = this -> n * a.n;      //t.n = n * a.n;
        return t;
    }
    arithmatic operator / (arithmatic &a)
    {
        arithmatic t;
        t.n = this -> n / a.n;      //t.n = n / a.n;
        return t;
    }
    void display()
    {
        cout<<n<<endl;
    }
};

int main()
{
    arithmatic a,b,c;
    a.get();
    b.get();
    c = a + b;
    cout<<"addition of two numbers : ";
    c.display();
    c = a - b;
    cout<<"substraction of two numbers : ";
    c.display();
    c = a * b;
    cout<<"multiplication of two numbers : ";
    c.display();
    c = a / b;
    cout<<"division of two numbers : ";
    c.display();
    return 0;
}