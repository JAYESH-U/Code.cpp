#include <iostream>
using namespace std;

template <class T1, class T2> // we can change the datatype during execution.

class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data1 = " << data1 << "\ndata2 = " << data2 << endl;
    }
};

/*
int main()
{
    system("CLS");
    myClass <int, char> c(1,'a');
    c.display();
    return 0;
}
*/

int main()
{
    system("CLS");
    myClass<char, float> c('c', 2.1);
    c.display();
    return 0;
}