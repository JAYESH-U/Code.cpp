#include <iostream>
using namespace std;

string mergeAlternately(string a, string b)
{
    int i = 0;
    string c;
    while (a[i] != '\0' && b[i] != '\0')
    {
        c += a[i];
        c += b[i];
        i++;
    }
    while (a[i] != '\0')
    {
        c += a[i];
        i++;
    }

    while (b[i] != '\0')
    {
        c += b[i];
        i++;
    }
    return c;
}

int main()
{
    cout << mergeAlternately("bxjegbjccjjxfnsi", "earbsgsofyw");
    return 0;
}