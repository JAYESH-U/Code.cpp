#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[100];
    char grade;
    public:
    void getdata();
    void desplaydata();
};
void student :: getdata()
{
    cout<<"enter name of the student : ";
    cin>>name;
    cout<<"enter roll number of the student : ";
    cin>>roll;
    cout<<"enter grade of the student : ";
    cin>>grade;
}
void student :: desplaydata()
{
    
    cout<<"\nname : "<<name<<"\troll number : "<<roll<<"\tgrade : "<<grade<<endl;
}
int main()
{
    student s[3];       //each object holds the information of one student..
    int i;
    for (i=0;i<3;i++)
        s[i].getdata();
    cout<<"\ndetails of the studens are : ";
    for (i=0;i<3;i++)
        s[i].desplaydata();
    return 0;
}