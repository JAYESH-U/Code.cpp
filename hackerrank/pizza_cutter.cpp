#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    int *n;
    int **d;
    int *c;
    cin >> t;
    n = new int[t];
    d = new int *[t];
    c = new int[t];

    for (int i = 0; i < t; i++)
    {
        c[i] = 0;
        cin >> n[i];
        d[i] = new int[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            cin >> d[i][j];
            if (d[i][j] > 360)
            {
                while (d[i][j] > 360)
                {
                    d[i][j] -= 360;
                }
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        if(n[i]==0)
            c[i]=1;
        else
        {
            for (int j = 0; j < n[i]; j++)
            {
                c[i] += 2;
                for (int k = j+1; k < n[i]; k++)
                {
                    if(d[i][j] == d[i][k] || d[i][j] == (-d[i][k]) || ((360-d[i][j]) == (d[i][k])) || ((360-d[i][j]) == (-d[i][k])))
                        c[i] -= 2;
                }
            }
        }
        cout<<c[i];
        cout<<endl;
    }
    return 0;
}