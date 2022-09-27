#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int roll;
    char gender;
    public:
    void getData()
    {
        cout<<"\nenter the details of the student : "<<endl;
        cout<<"name : ";
        cin>>name;
        cout<<"roll number : ";
        cin>>roll;
        cout<<"gender : ";
        cin>>gender;
    }
    void displayData()
    {
        cout<<"\ndetails of the student are : "<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"roll number : "<<roll<<endl;
        cout<<"gender : "<<gender<<endl;
    }
};

class results : public student
{
    private:
    int totalMarks;
    float percentage;
    char grade;
    public:
    void getresult()
    {
        cout<<"\nenter the student result info : "<<endl;
        cout<<"total marks : ";
        cin>>totalMarks;
        cout<<"percentage : ";
        cin>>percentage;
        cout<<"grade : ";
        cin>>grade;
    }
    void displayresult()
    {
        cout<<"\nthe student result info : "<<endl;
        cout<<"total marks : "<<totalMarks<<endl;
        cout<<"percentage : "<<percentage<<endl;
        cout<<"grade : "<<grade<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter the number of students : ";
    cin>>n;
    results r[n];
    cout<<"-----------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        r[i].getData();
        r[i].getresult();
    }
    cout<<"-----------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        r[i].displayData();
        r[i].displayresult();
    }
    return 0;
}