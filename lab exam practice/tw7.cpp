#include <iostream>
using namespace std;

class box
{
    double l, b, h, volume;

public:
    double getVolume()
    {
        return (l*b*h);
    }

    double getlength(double l)
    {
        this->l = l;
    }

    double getbreadth(double b)
    {
        this->b = b;
    }

    double getheight(double h)
    {
        this->h = h;
    }
    box operator +(const box b)
    {
        box temp;
        temp.l = this->l + b.l;
        temp.b = this->b + b.b;
        temp.h = this->h + b.h;
        return temp;
    }
};

int main()
{
    box b1,b2;
    b1.getlength(1);
    b1.getbreadth(2);
    b1.getheight(3);
    cout<<"the volume of 1st box is : "<<b1.getVolume()<<endl;
    
    b2.getlength(4);
    b2.getbreadth(5);
    b2.getheight(6);
    cout<<"the volume of 2nd box is : "<<b2.getVolume()<<endl;

    box b3 = b1 + b2;
    cout<<"the volume of 3rd box is : "<<b3.getVolume()<<endl;
    
    return 0;
}