#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class test
{
    int a, b;

public:
    // test (int i,int j) : a(i),b(j)
    // test (int i,int j) : a(i),b(i+j)
    // test (int i,int j) : a(i),b(a+j)
    // test (int i,int j) : b(j),a(b+i) not executed ->beecause of the order of declaration.
    test(int i, int j) : a(i), b(j)
    {
        cout << "constructor initalized : " << endl
             << "a : " << a << endl
             << "b : " << b << endl;
    }
};

int main()
{
    test t(2, 4);
    return 0;
}