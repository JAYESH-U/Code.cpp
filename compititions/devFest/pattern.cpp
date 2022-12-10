//first round  1st problem statement.
#include<iostream>
using namespace std;

int main()
{
    int n,*ni;
    cout<<"enter the number of patterns : ";
    cin>>n;
    ni=new int [n];
    cout<<"Enter "<<n<<" numebrs : ";
    for(int i=0;i<n;i++)
        cin>>ni[i];
    for(int k=0;k<n;k++)
        for(int i=1;i<=ni[k];i++)
        {
            for(int j=1;j<=i;j++)
                cout<<(10*j)+i<<" ";
            cout<<endl;
        }
    return 0;
}