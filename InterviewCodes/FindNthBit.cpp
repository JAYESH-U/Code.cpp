#include<iostream>
using namespace std;

int main()
{
    int n = 22;
    int position = 0;

    cout<<"The "<<position<<"th bit in "<<n<<" is "<<((n & (1 << position)) >> position)<<endl;
    // OR
    cout<<"The "<<position<<"th bit in "<<n<<" is "<<((n >> position) & 1)<<endl;

    return 0;
}