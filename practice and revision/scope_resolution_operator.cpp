#include<iostream>
using namespace std;

int m=10;
int main()
{
    int k=m;
    int m=20;
    {
        int m=30;
        cout<<"inside the main and {}"<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
    }
    cout<<"just inside main"<<endl;
    cout<<"k="<<k<<endl;
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m<<endl;
    return 0;
}