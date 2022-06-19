//incomplete..................

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int message()      //messages.........
{
    int me;
    while(1)
    {
        system("CLS");
        cout<<"no messages available.\n0.back"<<endl;
        cin>>me;
        if(me==0)
            return 0;
        else
            cout<<"invalid choice.."<<endl;
    }
}

int history()      //call history..........
{
    int h;
    while(1)
    {
        system("CLS");
        cout<<"call history is not available.\n0.back\n:"<<endl;
        cin>>h;
        if(h==0)
            return 0;
        else
            cout<<"invalid choice.."<<endl;
    }
}

int setting()      //settings.......
{
    
    int s;
    while(1)
    {
        system("CLS");
        cout<<" 1.Phone\n 2.Display\n 3.Language\n 4.About Phone\n 0.back\n:"<<endl;
        cin>>s;
        switch (s)
        {
            case 0: return 0;break;
            //case 1: phone();break;
            //case 2: display();break;
            //case 3: language();break;
            //case 4: about();break;
            //default : cout<<"invalid choice........"<<endl;
        }
    }
}

int gallery()       //gallery.......
{
    int g;
    while(1)
    {
        system("CLS");
        cout<<"photos are not available.\n0.back\n:"<<endl;
        cin>>g;
        if(g==0)
            return 0;
        else
            cout<<"invalid choice.."<<endl;
    }
}

int contact()  //contacts........
{   
    start:
    system("CLS");
    int c;
    cout<<"no countacts available.\n0.back\n:"<<endl;
    cin>>c;
    if(c==0)
        return 0;
    else
        cout<<"invalid choice.."<<endl;
    goto start;
}

//extra......

int calender()
{
    //code......
}

int alaram()
{
    int h=00,m=00,s=00,a;
    while(1)
    {
        system("CLS");
        cout<<"alaram is set at"<<h<<":"<<m<<":"<<s<<endl;
        cout<<"1.set alaram\t0.back\n:";
        cin>>a;
        if(a==0)
            return 0;
        else if(a==1)
        {
            system("CLS");
            cout<<"enter the time as hh mm ss : ";
            cin>>h>>m>>s;
        }
        else
            cout<<"invalid choice.."<<endl;
    }
}

int bluetooth()
{
    int bt=0,s;
    while(1)
    {
        system("CLS");
        cout<<"bluetooth : ";
        if(bt==0)
            cout<<"off"<<endl;
        else
            cout<<"on"<<endl;
        cout<<"1.change bluetooth settings.\n0.back\n:";
        cin>>s;
        if(s==0)
            return 0;
        else if(s==1)
        {
            system("CLS");
            cout<<"1.on\n2.off\n0.back\n:";
            cin>>s;
            if(s==0)
                continue;
            else if(s==1)
                    bt=1;   //on
            else if(s==2)
                    bt=0;   //off
            else
                cout<<"invalid choice.."<<endl;
        }
        else
            cout<<"invalid choice.."<<endl;
    }
}

int extra()     
{
    system("CLS");
    int e;
    while(1)
    {
        system("CLS");
        cout<<" 1.Calender\n 2.Alaram\n 3.bluetooth\n 0.back\n:"<<endl;
        cin>>e;
        switch (e)
        {
            case 0: return 0;break;
            case 1: calender();break;
            case 2: alaram();break;
            case 3: bluetooth();break;
            default: cout<<"invalid choice....."<<endl;
        }
    }
}

int camera()        //camera........
{
    int c;
    while(1)
    {
        system("CLS");
        cout<<"camera is not available.\n 0.back\n:"<<endl;
        cin>>c;
        if(c==0)
            return 0;
        else
            cout<<"invalid choice.."<<endl;
    }
}

int calculator()
{
    char ch;
    float n[100],sum=0,mean=0,pro=1,sq,rem=0,dev=0;
    int i,a;
    system("CLS");
    while(1)
    {
        system("CLS");
        cout<<"1.proceed\n0.back\n:";
        cin>>a;
        if(a==0)
            return 0;
        else if(a==1)
        {
            cout<<"enter the number of operands : ";
            cin>>a;
            cout<<"enter the operator : ";
            cin>>ch;
            cout<<"enter the numbers : ";
            for (i=0;i<a;i++)
                cin>>n[i];
            switch(ch)
            {
                case '+':for(i=0;i<a;i++){
                    sum=sum+n[i];
                }
                cout<<"the sum is : "<<sum<<endl;break;
                case '-':for(i=0;i<a;i++){
                    rem=rem-n[i];
                }
                cout<<"the difference is : "<<rem<<endl;break;
                case '*':for(i=0;i<a;i++){
                    pro=pro*n[i];
                }
                cout<<"the product is : "<<pro<<endl;break;
                case '/':for(i=0;i<a;i++){
                    dev=dev/n[i];
                }
                cout<<"the quotient is : "<<dev<<endl;break;
                default:cout<<"invalid choice.."<<endl;
            }
        }
        else
            cout<<"invalid choice.."<<endl;
    }
}

int games()
{
    int g;
    while(1)
    {
        system("CLS");
        cout<<"install some games to play..\n0.back\n:";
        cin>>g;
        if(g==0)
            return 0;
        else
            cout<<"invalid choice.."<<endl;
    }
}

int menu()     //menu.......
{
    int m;
    system("CLS");
    while(1)
    {
        system("CLS");
        cout<<" 1.Contacts\t 2.Messages\t 3.Call History\n 4.Settings\t 5.Gallery\t 6.Extra\n 7.Camera\t 8.Calculator\t 9.Games\n 0.back\n:";
        cin>>m;
        switch (m)
        {
            case 0: return 0;break;
            case 1: contact();break;
            case 2: message();break;
            case 3: history();break;
            case 4: setting();break;
            case 5: gallery();break;
            case 6: extra();break;
            case 7: camera();break;
            case 8: calculator();break;
            case 9: games(); break;
            default : cout<<"invalid choice........"<<endl;break;
        }
    }   
}



int main()
{
    int a;
    while(1)
    {
        system("CLS");
        cout<<"hello Jayesh\n choose one of the options: \n 1.Menu\n 2.Contacts\n 3.Exit\n:";
        cin>>a;
        if(a!=3)
            if(a==1)
                menu();
            else if(a==2)
                contact();
            else
                cout<<"invalid choice...";
        else
            exit(0);
    }
    return 0;
}