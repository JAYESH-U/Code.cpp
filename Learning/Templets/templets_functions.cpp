#include <iostream>
using namespace std;

// float funcAverage1(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template <class t>
void swaap(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>

float funcAverage(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    system("CLS");
    float a,b;
    a = funcAverage(5, 2.4);
    cout << "the average of the numbers is : " << a << endl;
    
    b = funcAverage(2,5);
    cout << "the average of the numbers is : " << b << endl;

    int x = 5, y = 7;
    swaap(x, y);
    cout << x << " " << y << endl;
    
    char c = 'c', d = 'd';
    swaap(c, d);
    cout << c << " " << d << endl;

    return 0;
}