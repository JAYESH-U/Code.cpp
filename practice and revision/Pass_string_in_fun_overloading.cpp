#include<iostream>
using namespace std;
void strcopy(char s1[10],char s2[10])
{
    s2=s1;
    cout<<"string copied is : "<<s2<<endl;
}
void strcopy(char s1[10],char s2[10],int n)
{
    int i;
    for (i=0;i<n;i++)
        s2[i] = s1[i];
    cout<<"string of n charector is : "<<s2<<endl;
}
int main()
{
    char s1[10]="hello",s2[10]="";
    int n=3;
    strcopy(s1,s2);
    strcopy(s1,s2,n);
    return 0;
}