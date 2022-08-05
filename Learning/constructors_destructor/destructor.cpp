#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    system("CLS");
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    //constructor for n1 is called..
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        //Constructor for n2 and n3 is called
        cout << "Exiting this block" << endl;
    }
    //destrucors for n2 and n3 called after exiting their scope...
    cout << "Back to main" << endl;
    return 0;
}
    //destructors for n1 is called..