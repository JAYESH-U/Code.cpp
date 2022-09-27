#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class student
{
    private:
        string name;
        int totalmarks,m1,m2,m3,roll;
        float avg;
    public:
        void getdata();
        void total_marks();
        void display();
};

void student :: getdata()
{
    cout<<"enter the details of the student "<<endl;
    cout<<"name : ";
    getline(cin,name);
    cout<<"roll number : ";
    cin>>roll;
    cout<<"marks \nm1 : ";
    cin>>m1;
    cout<<"m2 : ";
    cin>>m2;
    cout<<"m3 : ";
    cin>>m3;
}

void student :: total_marks()
{
    totalmarks=m1+m2+m3;
    avg=totalmarks/3;
}

void student :: display()
{
    cout<<"roll number "<<roll<<", name: "<<name<<"\ntotal marks is :"<<totalmarks<<"\naverage marks is : "<<avg<<endl;
}
int main()
{
    student s;
    s.getdata();
    s.total_marks();
    s.display();
    return 0;
}