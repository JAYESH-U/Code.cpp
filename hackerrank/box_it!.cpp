#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)
class Box
{
    friend std::ostream &operator<<(std::ostream &os, const Box &b);

private:
    int l;
    int b;
    int h;

public:
    /*  Box()
      :l(0),b(0),h(0){
      }*/
    //initializes with the help of concept of -> constructor initalization list
    Box(int len = 0, int bred = 0, int hei = 0) : l(len), b(bred), h(hei) // initalization list....
    {
    }

    //initializes according to the declaration of the variables (int l,b,h).
    Box(const Box &source) : Box(source.l, source.b, source.h)
    {
    }
    
    bool operator<(const Box &rhs) const
    {
        if (this->l < rhs.l)
            return true;
        if ((this->b < rhs.b) && (this->l == rhs.l))
            return true;
        if ((this->h < rhs.h) && (this->l == rhs.l) && (this->b < rhs.b))
            return true;
        return false;
    }

    int getLength() const
    {
        return l;
    }
    int getBreadth() const
    {
        return b;
    }
    int getHeight() const
    {
        return h;
    }
    
    long long int CalculateVolume() const
    {
        return (long long)(l)*b * h;
    }
};
std::ostream &operator<<(std::ostream &os, const Box &b)
{
    os << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
    return os;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}