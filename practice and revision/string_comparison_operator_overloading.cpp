#include <iostream>
using namespace std;
class str
{
    string s;

public:
    str()
    {
        //s = new char(100);
    }
    /*
    str(string s)
    {
        this -> s = s;
    }
    */
    bool operator==(str &s)
    {
        if (this->s == s.s)
            return true;
        return false;
    }
    void display()
    {
        cout << s << endl;
    }
    void input(string a)
    {
        s = a;
        cout<<a<<endl;
    }
};
int main()
{
    system("CLS");
    //str s("hello"), s2;
    //s.display();
    str s,s2;
    s.input("this");
    s2.input("this");
    if (s2 == s)
        cout << "They are equal" << endl;
    else
        cout << "Not equal" << endl;
    return 0;
}