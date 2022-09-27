//C++ program to read and print students information using two classes.Basic information includes Name, USN and fees paid. It includes a derived class that implements virtual function 
//to read the details of student and the pure virtual function to display the details of the student.

#include <iostream>
using namespace std;

class student
{
protected:
    string name, usn;

public:
    virtual void insert() = 0;
};

class admission : public student
{
    float fees;
    public:
    void insert()
    {
        cout<<"enter the details : "<<endl;
        cout<<"name : ";
        cin>>name;
        cout<<"usn : ";
        cin>>usn;
        cout<<"fees paid : ";
        cin>>fees;
    }
    void show()
    {
        cout<<"\ndetails are : "<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"usn : "<<usn<<endl;
        cout<<"fees paid :"<<fees<<endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    admission s[n];
    for (int i = 0; i < n; i++)
        s[i].insert();
    for (int i = 0; i < n; i++)
        s[i].show();
    return 0;
}