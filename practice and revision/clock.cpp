#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    time_t now= time(0);
    char *dt = ctime(&now);
    cout<<"the local time is : "<<dt<<endl;
    tm *gm = gmtime (&now); 
    dt = asctime(gm);
    cout<<"the UTC date and time is : "<<dt<<endl;
    return 0;
}