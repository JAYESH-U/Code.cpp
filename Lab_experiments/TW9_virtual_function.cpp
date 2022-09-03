//C++ program to read and print students information using two classes.Basic information includes Name, USN and fees paid. It includes a derived class that implements virtual function 
//to read the details of student and the pure virtual function to display the details of the student.

#include <iostream>

using namespace std;

const int MAX = 80;

class student
{
protected:
    char name[MAX];
    char USN[MAX];

public:
    virtual void show() = 0;
};

class Stud_Adm : public student
{
protected:
    int fees;

public:
    virtual void insert()
    {
        cout << "Name: ";
        cin >> name;
        cout << "USN: ";
        cin >> USN;
        cout << "Fees: ";
        cin >> fees;
    }

    void show()
    {
        cout << "\nName : " << name << "\n";
        cout << "USN: " << USN << "\n";
        cout << "Fees : " << fees << "\n";
    }
};

int main()
{
    int n;
    Stud_Adm s[10];
    cout << "Enter the number of students" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        s[i].insert();
    for (int i = 0; i < n; i++)
        s[i].show();
    return 0;
}