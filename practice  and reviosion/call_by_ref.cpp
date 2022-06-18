#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int m=10,n=20;
    cout<<"the value of m and n are : "<<m<<" "<<n<<endl;
    swap(m,n);
    cout<<"the swaped walues of m and n are : "<<m<<" "<<n;
    return 0;
} 
