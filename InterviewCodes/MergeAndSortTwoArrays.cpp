#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8, 10};

    int aSize = sizeof(a)/sizeof(a[0]);
    int bSize = sizeof(b)/sizeof(b[0]);

    int cSize = aSize + bSize;

    int* c = new int[cSize];

    for(int i = 0; i < aSize; i++)
    {
        c[i] = a[i];
    }

    for(int i = 0; i < bSize; i++)
    {
        c[aSize + i] = b[i];
    }

    // Sorting the array using bubble sort
    for(int i = 0; i < cSize; i++)
    {
        for(int j = i + 1; j < cSize; j++)
        {
            if(c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for(int i = 0; i < cSize; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}