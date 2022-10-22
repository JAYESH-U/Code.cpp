#include <iostream>
using namespace std;

int main()
{
    long int t, *s, *c, *cf, *cost, rf, rem;
    long int **f, **r;
    cin >> t;
    cost = new long int[t];
    s = new long int[t];
    c = new long int[t];
    cf = new long int[t];
    f = new long int *[t];
    r = new long int *[t];
    for (int j = 0; j < t; j++)
    {
        cin >> s[j] >> c[j] >> cf[j];
        f[j] = new long int[s[j]];
        r[j] = new long int[s[j]];
        cost[j] = c[j] * cf[j];
        rem = c[j];
        for (int i = 0; i < s[j]; i++)
            cin >> f[j][i] >> r[j][i];
        for (int i = 0; i < s[j] - 1; i++)
        {
            rem = rem - f[j][i];
            if (rem < f[j][i])
            {
                rf = 35 - rem;
                cost[j] += (rf * r[j][i]) + 500;
                rem = c[j];
            }
        }
    }
    for (int j = 0; j < t; j++)
        cout << cost[j] << endl;
    return 0;
}