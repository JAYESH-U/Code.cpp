#include<iostream>
using namespace std;

int main()
{
    int bt=0,s;
    while(1)
    {
        system("CLS");
        cout<<"bluetooth : ";
        if(bt==0)
            cout<<"off"<<endl;
        else
            cout<<"on"<<endl;
        cout<<"1.change bluetooth settings.\n0.back\n:";
        cin>>s;
        if(s==0)
            exit(0);
        else if(s==1)
        {
            system("CLS");
            cout<<"1.on\n2.off\n0.back\n:";
            cin>>s;
            if(s==0)
                continue;
            else if(s==1)
                    bt=1;   //on
            else if(s==2)
                    bt=0;   //off
            else
                cout<<"invalid choice.."<<endl;
        }
        else
            cout<<"invalid choice.."<<endl;
    }
    return 0;
}