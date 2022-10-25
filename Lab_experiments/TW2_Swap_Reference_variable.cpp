#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    cout << "the values of a and b before swap is = " << a << " and " << b << endl;
    swap(a, b);
    cout << "the values of a and b after swap is = " << a << " and " << b << endl;
    return 0;
}