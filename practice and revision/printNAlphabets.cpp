#include<iostream>
using namespace std;

int main()
{
    string s = "b3c6d15";
    string ans = "";

    int i = 0, j = 1;

    string c;
    int num;

    while(i < s.length())
    {
        c = "";
        num = 0;
        while(isalpha(s[i]))
        {
            c += s[i];
            i++;
        }
        cout<<"C: "<<c<<" ";
        while(isdigit(s[i]))
        {
            num = num*10 + (s[i] - '0');
            i++;
        }
        cout<<"num: "<<num<<" ";
        for(int k = 0; k < num; k++)
        {
            ans += c;
        }
    }

    cout<<ans<<endl;
    return 0;
}