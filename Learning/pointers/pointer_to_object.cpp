#include<iostream>
using namespace std;
class a
{
    int a;
    public:
    void getdata(int b)
    {
        a = b;
    }
    void show()
    {
        cout<<"a : "<<a<<endl;
    }
};
int main()
{
    a a1;
    a1.getdata(20);
    a *b;
    b = &a1;
    b->show();
    return 0;
}