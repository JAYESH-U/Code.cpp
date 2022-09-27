#include<iostream>
using namespace std;

int main()
{
    int h=00,m=00,s=00,a;
    while(1)
    {
        system("CLS");
        cout<<"alaram is set at"<<h<<":"<<m<<":"<<s<<endl;
        cout<<"1.set alaram\t0.exit\n:";
        cin>>a;
        if(a==0)
            exit (0);
        else if(a==1)
        {
            system("CLS");
            cout<<"enter the time as hh mm ss : ";
            cin>>h>>m>>s;
        }
        else
            cout<<"invalid choice.."<<endl;
    }
    return 0;
}