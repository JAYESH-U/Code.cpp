#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, temp;
        char tr;
        cin >> s;
        int len = s.size();
        if (s.size() > 1)
        {
            t = temp = s;
            tr = s[0];

            for (int i = 1; s[i] != '\0'; i++)
                s[i - 1] = s[i];

            s[len-1] = tr;

            for (int i = len - 1; i >= 0; i--)
                t[i + 1] = t[i];

            t[0] = temp[len-1];

            cout << s << " " << t << endl;

            if (s == t)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else    cout<<"YES"<<endl;
    }
    return 0;
}
