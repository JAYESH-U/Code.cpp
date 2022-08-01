#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float InterestRate;
    float ReturnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    InterestRate = r;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    InterestRate = float(r) / 100;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Principal amount was : " << principal
         << ", Return value after : " << years << " years is : " << ReturnValue << endl<<endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r : " << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << "enter the value of p y and R : " << endl;
    cin >> p >> y >> R;
    b2 = BankDeposit(p, y, R);
    b2.show();

    b3.show();      //prints garbage value....

    return 0;
}