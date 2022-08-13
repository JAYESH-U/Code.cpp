// C++ program to read and print students information using two classes and simple inheritance.Basic information includes Name, age and gender. It also includes a derived class for students Total marks and grade.

#include <iostream>

using namespace std;
// Base class
class student_basic_info
{
private:
    char name[30];
    int age;
    string gender;

public:
    void getBasicInfo(void);
    void putBasicInfo(void);
};

// function definitions

void student_basic_info::getBasicInfo(void)
{
    cout << "Enter student's basic information:" << endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Gender(Male/Female): ";
    cin >> gender;
}

void student_basic_info::putBasicInfo(void)
{
    cout << endl
         << "Name: " << name << ",   Age: " << age << ",   Gender: " << gender << endl;
}

// Derived class

class student_result_info : public student_basic_info
{
private:
    int totalM;
    float perc;
    char grade;

public:
    void getResultInfo(void);
    void putResultInfo(void);
};

// function definitions

void student_result_info::getResultInfo(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Enter Total Marks(out of 500): ";
    cin >> totalM;
    perc = (float)((totalM * 100) / 500);
    cout << "Enter Grade: ";
    cin >> grade;
}

void student_result_info::putResultInfo(void)
{
    cout << endl
         << "Total Marks: " << totalM << "\n"
         << "Percentage: " << perc << "\n"
         << "Grade: " << grade << endl;
}

int main()
{
    // create object of derived class
    student_result_info std;

    // read student basic and result information
    std.getBasicInfo();
    std.getResultInfo();

    // print student basic and result information
    std.putBasicInfo();
    std.putResultInfo();

    return 0;
}
