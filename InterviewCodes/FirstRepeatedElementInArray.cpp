#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {5, 2, 3, 1, 6, 3, 5, 2, 4, 6};

    set<int> s;
    for(int i = 0; i < 10; i++)
    {
        if(s.find(a[i]) != s.end())
        {
            cout << "First repeated element is " << a[i];
            return 0;
        }
        s.insert(a[i]);
    }

    cout << "No repeated element found";
    return 0;
}