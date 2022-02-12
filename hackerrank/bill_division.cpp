#include <iostream>

using namespace std;

int main()
{
    int n,k,b[100000],bch,co,tb=0,htb,op,i;
    cout<<"enter the number of orders requested and cancelled : "; //position is terms of 0,1,2,3,4...
    cin>>n>>k;
    cout<<"enter the cost of orders : ";
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        tb=tb+b[i];
    }
    cout<<"enter the bill charged after splitting amount : ";
    cin>>bch;
    co=b[k];
    htb=(tb-co)/2;
    if(htb==bch)
        cout<<" bill is splitted into perfect halfs without considering the cancelled one.. ";
    else 
    {
        op=bch-htb;
        cout<<"difference between bill charged and actual bill : ";   //actual bill= witout adding the cancelled order amount...
        cout<<op;
    }
    return(0);
}