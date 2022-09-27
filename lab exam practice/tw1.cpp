#include <iostream>
using namespace std;

class emp
{
private:
    string name, department;
    int id;
    double basic, DA, HRA, IT, net;

public:
    void emp_details();
    void net_calculations();
    void printdata();
};

void emp ::emp_details()
{
    cout << "enter the details of the employee : " << endl;

    cout << "name : ";
    cin >> name;
    cout << "id : ";
    cin >> id;
    cout << "department : ";
    cin >> department;
    cout << "basic salary : ";
    cin >> basic;
    cout << endl;
}

void emp ::net_calculations()
{
    DA = 0.7 * basic;
    HRA = 0.2 * (basic + DA);
    IT = 0.3 * basic;
    net = (basic + DA + HRA) - IT;
}

void emp ::printdata()
{
    cout << "-------------------------------------------" << endl;
    cout << "The employee details are : " << endl;
    cout << "name : " << name << endl;
    cout << "id : " << id << endl;
    cout << "department : " << department << endl;
    cout << "-------------------------------------------" << endl;
    cout << "the salary details of the employee are : " << endl;
    cout << "basic : " << basic << endl;
    cout << "DA : " << DA << endl;
    cout << "HRA : " << HRA << endl;
    cout << "IT : " << IT << endl;
    cout << "Net salary : " << net << endl
         << endl;
}

int main()
{
    int n;
    cout << "enter the number of employee : ";
    cin >> n;
    emp e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].emp_details();
        e[i].net_calculations();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].printdata();
    }
    return 0;
}