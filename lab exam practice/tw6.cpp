#include <iostream>
using namespace std;

class player
{
    string name;
    int Number, Matches, TotalGoals = 0;
    int *goals;

public:
    player()
    {
        cout << "-----------------------------------------" << endl;
        cout << "enter the name of the player : ";
        cin >> name;
        cout << "enter the player number : ";
        cin >> Number;
        cout << "enter the number of matches played by " << name << " : ";
        cin >> Matches;
        goals = new int[Matches];
        cout << "enter the number of goals per match : " << endl;
        for (int i = 0; i < Matches; i++)
        {
            cout << "number of goals in match " << i + 1 << " : ";
            cin >> goals[i];
            TotalGoals += goals[i];
        }
    }
    void display()
    {
        cout << "-----------------------------------------" << endl;
        cout << "details of the player is : " << endl;
        cout << "name : " << name << endl;
        cout << "number : " << Number << endl;
        cout << "number of matches played : " << Matches << endl;
        cout << "number of goals per match : " << endl;
        for (int i = 0; i < Matches; i++)
            cout << "\t" << i + 1 << "st match : " << goals[i] << endl;
    }
};

int main()
{
    int n;
    cout << "enter the number of players : ";
    cin >> n;
    player p[n];
    for (int i = 0; i < n; i++)
        p[i].display();
    return 0;
}