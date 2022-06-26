#include<iostream>
//#include<cstdlib>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
    int random_no,uc,cc,u;
    while(1)
    {
        system("CLS");
        srand(time(0));
        random_no = rand() % 3;
        cc = random_no;
        cout<<"Enter your choice :\t4.exit. \n0.Rock,\n1.paper\n2.scissor\n:";
        cin>>uc;
        if(uc==4)
            exit(0);
        if(uc==0 || uc==1 || uc==2)
        {
            if(uc==cc)
                cout<<"its a tie";
            else
            {
                if(uc==0)
                {
                    cout<<"user choice = Rock."<<endl;
                    if(uc==0 && cc==1)
                        cout<<"compiler choice = Paper.\nPaper covers the rock and compiler wins.";
                    else if(uc==0 && cc==2)
                        cout<<"compiler choice = scissor.\nRock break the scissor and you win.";
                }
                else if(uc==1)
                {
                    cout<<"user choice = Paper."<<endl;
                    if(uc==1 && cc ==0)
                        cout<<"compiler choice = Rock.\nPaper covers the rock and you win.";
                    else if(uc==1 && cc==2)
                        cout<<"compiler choice = scissor.\nscissor cut the paper and compiler wins.";
                }
                else
                {
                    cout<<"user choice = scissor."<<endl;
                    if(uc==2 && cc==0)
                        cout<<"compiler choice = Rock.\nRock breaks the scissor and compiler wins.";
                    else if(uc==2 && cc==1)
                        cout<<"compiler choice = Paper.\nscissor cuts the paper and you win.";
                }
            }
        }
        else
            cout<<"invalid choice.....";
        start:
        cout<<"\n\n1.play again.\n0.back\n:";
        cin>>u;
        if(u==0)
            exit(0);
        else if(u==1)
            continue;
        else
            cout<<"invalid choice....";
        goto start;
    }   
}