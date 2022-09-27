#include <iostream>

using namespace std;

class box
{
    double volume, l, b, h;

public:
    double getvolume()
    {
        return l * b * h;
    }
    void setlength(double len)
    {
        l = len;
    }
    void setbreadth(double bre)
    {
        b = bre;
    }
    void setheight(double hei)
    {
        h = hei;
    }
    box operator+(const box &b)
    {
        box bo;
        bo.l = this->l + b.l;
        bo.b = this->b + b.b;
        bo.h = this->h + b.h;
        return bo;
    }
};

int main()
{
    box b1, b2, b3;
    b1.setlength(6.0);
    b1.setbreadth(7.0);
    b1.setheight(5.0);
    cout << "voulume of box 1 : " << b1.getvolume() << endl;

    b2.setlength(12.0);
    b2.setbreadth(13.0);
    b2.setheight(10.0);
    cout << "voulume of box 2 : " << b2.getvolume() << endl;

    b3 = b1 + b2;
    cout << "voulume of box 3 : " << b3.getvolume() << endl;
    return 0;
}