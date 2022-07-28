#include<iostream>
#include<math.h>
using namespace std;

class point //distance is a keyword so we cant use it as a class name...
{
    int x,y,dist;
    public:
        point (int a, int b);

        void display ()
        {
            cout<<"(x , y ) is : ("<<x<<", "<<y<<")"<<endl;
        }

        friend void dist (point ,point);
};

point :: point(int a , int b)
{
    x = a;
    y = b;
}

void dist (point o1,point o2)
{
    float dist = sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2));
    cout<<"distance between two points ("<<o1.x<<", "<<o1.y<<") and ("<<o2.x<<", "<<o2.y<<") is : "<<dist;
}

int main()
{
    system("CLS");
    point a(1,2);
    a.display();
    point b(2,4);
    b.display();
    dist(a,b);
    return 0;
}