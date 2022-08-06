#include <iostream>
using namespace std;

class base
{
    int data1;  //private by default and is not inheritable...

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class derived : public base     //class is derived publically..
{
public:
    int data3;
    void process();
    void display();
};

void derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "value of data 1 : " << getdata1() << endl;
    cout << "value of data 2 : " << data2 << endl;
    cout << "value of data 3 : " << data3 << endl;
}

int main()
{
    derived d;
    d.setdata();
    d.process();
    d.display();
    return 0;
}