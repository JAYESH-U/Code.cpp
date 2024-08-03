#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int count = 0;
    int i = 2;

    while(count < num * 2)
    {
        int flag = 0;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            count++;
            if(count % 2 != 0)
            {
                cout<<i<<" ";
            }
        }

        i++;
    }
    return 0;
}