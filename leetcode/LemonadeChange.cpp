#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool lemonadeChange(vector<int> &a)
{
    int i = 0, n = a.size();
    unordered_map<int, int> m;
    
    while (i < n)
    {
        if (a[i] == 5)
        {
            m[5]++;
        }
        else if (a[i] == 10)
        {
            if (m[5] == 0)
            {
                return false;
            }
            m[5]--;
            m[10]++;
        }
        else
        {
            if (m[10] > 0 && m[5] > 0)
            {
                m[10]--;
                m[5]--;
            }
            else if (m[5] >= 3)
            {
                m[5] -= 3;
            }
            else
            {
                return false;
            }
        }
        i++;
    }
    return true;
}

int main()
{
    vector<int> bills = {5, 5, 10, 10, 20};

    cout << "Possible to give change: " << lemonadeChange(bills) << endl;

    return 0;
}