#include <iostream>
using namespace std;

template <class t>
class jayesh
{
public:
    t data;
    jayesh(t a)
    {
        data = a;
    }
    // void display(){
    //     cout<<data<<endl;
    // }
    void display();
};

template <class t>
void jayesh<t>::display()
{
    cout << "data : " <<data << endl;
}

template <class t>
void func(t a)
{
    cout << "i am template func : " << a << endl;
}
void func(int a)
{
    cout << "i am first func : " << a << endl;
}
int main()
{
    system("CLS");
    // jayesh<float> j(2.5);
    // cout << j.data << endl;
    // j.display();

    jayesh<char> j('c');
    j.display();

    func(4); // Exact match first priority.
    func('a');
    return 0;
}