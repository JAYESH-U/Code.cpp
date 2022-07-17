#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void show()        //if we call b->show(). after assigning base *b = &d it neglects this funtion and execute derived funtions because it is vertual.
        //void show()                 //if we call b->show(). this funtion will execute.
        {
        cout<< "Base class "<<endl;
        }
};
class Derived:public Base
{
    public:
        void show()
        {
        cout<< "Derived Class "<<endl;
        }
};

int main()
{
    Base a;         //base classs pointer
    Base* b;       //Base class pointer  //without any adress.
    a.show();     //print base class
    //b->show();    // this has no adress to go to..
    Derived d;       //Derived class object
    d.show();       //print derived class
    b = &d;
    b->show();      //print derived class instead of base class.
       
}
