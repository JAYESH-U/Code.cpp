#include<iostream>
using namespace std;

int main()
{
    int n = 22;
    int position = 2;

    cout<<"Number before flipping "<<position<<"th bit is "<<n<<endl;

    unsigned int mask = 1 << position;
    n = n ^ mask;

    cout<<"Number after flipping "<<position<<"th bit is "<<n<<endl;
    return 0;
}