#include<iostream>
#include<conio.h>
using namespace std;

class player
{
    int PlayerNumber,NumberOfMatches,TotalGoals;
    string name;
    int *goals;
    public:
    player()        //constructor..
    {
        system("CLS");
        cout<<"Enter the name of player : ";
        cin>>name;
        cout<<"Enter the player number : ";
        cin>>PlayerNumber;
        cout<<"Enter the number of matches played : ";
        cin>>NumberOfMatches;
        cout<<endl;
        goals = new int [NumberOfMatches];
        TotalGoals = 0;
        for (int i=0;i<NumberOfMatches;i++)
        {
            cout<<"Number of goals in match "<<i+1<<" is : ";
            cin>>goals[i];
            TotalGoals += goals[i];
        }
    }
    void desplay ()
    {
        cout<<"\n---------------------------------------\n\n";
        cout<<"Name of the player : "<<name<<endl;
        cout<<"Player Number : "<<PlayerNumber<<endl;
        cout<<"Number of matches played : "<<NumberOfMatches<<endl;
        cout<<endl;
        for(int i=0;i<NumberOfMatches;i++)
            cout<<"Goals in match "<<i+1<<" : "<<goals[i]<<endl;
        cout<<"\nTotal number of goals by "<<name<<" is : "<<TotalGoals<<endl;
    }
    ~player()       //destructor...
    {
        cout<<"Destructor executed.."<<endl;
    }
};

int main()
{
    player p;
    p.desplay();
    return 0;
}