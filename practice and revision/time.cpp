#include<iostream>
#include<ctime>
#include<stdio.h>
using namespace std;

int main() // calender....extra and phone.......
{
    int ca,cas;
    while (1)
    {
        start:
        system("CLS");
        time_t now = time(0);
        char *dt = ctime(&now);
        tm *gm = gmtime(&now);
        dt = asctime(gm);
        cout<<"1.local time\n2.UTC time\n0.back\n:";
        cin>>cas;
        if(cas==0)
            exit(0);
        else if(cas==1)
        {
            system("CLS");
            cout << "the local time is : " << dt << endl;
            cout << "0.back\n:";
            cin >> ca;
            if (ca == 0)
                goto start;
            else
                cout << "invalid choice....";
        }
        else if(cas==2)
        {
            system("CLS");
            cout << "the UTC date and time is : " << dt << endl;
            cout << "0.back\n:";
            cin >> ca;
            if (ca == 0)
                goto start;
            else
                cout << "invalid choice....";
        }
        else
            cout << "invalid choice....";
    }
}