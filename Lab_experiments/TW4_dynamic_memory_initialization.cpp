#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int length, sum = 0, lg, sm;
    cout << "Enter the size of the array : ";
    cin >> length;
    int *elements = new int[length];
    cout << "Enter the elements in the array : ";

    for (int i = 0; i < length; i++) // entering elements in the array
    {
        cin >> elements[i];
    }

    lg = elements[0];
    sm = elements[0];
    for (int i = 0; i < length; i++)
    {
        sum += elements[i];
        if (lg < elements[i])
        {
            lg = elements[i];
        }

        if (sm > elements[i])
        {
            sm = elements[i];
        }
    }
    cout << "Largest element is : " << lg << endl;
    cout << "Smallest Element is : " << sm << endl;
    cout << "Mean is : " << sum / length << endl;
    //system("PAUSE");
    //return EXIT_SUCCESS;
    return 0;
}
