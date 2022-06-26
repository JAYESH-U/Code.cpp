//incomplete..................

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>

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

//settings.......

int wallpaper()     //wallpaper..
{
    int w,so,ba;
    while(1)
    {
        system("CLS");
        cout<<"1.change wallpaper \n0.back \n:"<<endl;
        cin>>w;
        if(w==0)
            return 0;
        else if(w==1)
        {   
            start:
            system("CLS");
            cout<<"choose the source : \n1.gallery \n2.camera \n0.back \n:"<<endl;
            cin>>so;
            if(so==0)
                return 0;
            else if(so==1)
            {
                system("CLS");
                cout<<"photos not found....\n0.back\n:";
                cin>>ba;
                if(ba==0)
                    goto start;
            }
            else if(so==2)
            {
                system("CLS");
                cout<<"camera is not available in your device..\n0.back\n:";
                cin>>ba;
                if(ba==0)
                    goto start;
            }
            else
                cout<<"invalid choice..";
        }
    }
}

int calender()      //calender....extra and phone.......
{
    int ca;
    while(1)
    {
        system("CLS");
        time_t now= time(0);
        char *dt = ctime(&now);
        cout<<"the local time is : "<<dt<<endl;
        tm *gm = gmtime (&now); 
        dt = asctime(gm);
        cout<<"the UTC date and time is : "<<dt<<endl;
        cout<<"0.back\n:";
        cin>>ca;
        if(ca==0)
            return 0;
        else
            cout<<"invalid choice....";
    }
}


int flight_mode()       //flight mode....
{
    int fm=0,fms;
    while(1)
    {
        system("CLS");
        cout<<"Flight mode : ";
        if(fm==0)
            cout<<"off"<<endl;
        else
            cout<<"on"<<endl;
        cout<<"1.change flight mode settings.\n0.back\n:";
        cin>>fms;
        if(fms==0)
            return 0;
        else if(fms==1)
        {
            system("CLS");
            cout<<"1.on\n2.off\n0.back\n:";
            cin>>fms;
            if(fms==0)
                continue;
            else if(fms==1)
                    fm=1;   //on
            else if(fms==2)
                    fm=0;   //off
            else
                cout<<"invalid choice.."<<endl;
        }
        else
            cout<<"invalid choice.."<<endl;
    }
}

int phone()     //phone...settings
{
    int ph;
    while(1)
    {
        system("CLS");
        cout<<"1.Date and Time \n2.flight mode \n0.back:";
        cin>>ph;
        if(ph==0)
            return 0;
        else if(ph==1)
            calender();
        else if(ph==2)
            flight_mode();
        else
            cout<<"invalid choice...";
    }
}

int display()       //display...
{
    int d;
    while(1)
    {
        system("CLS");
        cout<<"1.Wallpaper \n0.back\n:"<<endl;
        cin>>d;
        if(d==1)
            wallpaper();
        else if(d==0)
            return 0;
        else
            cout<<"invalid choice..";
    }
}

int language()      //language..
{
    int l;
    while(1)
    {
        system("CLS");
        cout<<"currently ENGLISH is the only laguage available on your device\n0.back\n:";
        cin>>l;
        if(l==0)
            return 0;
        else
            cout<<"invalid choice...";
    }
}

int specifications()        //specifications..
{
    int sp;
    while(1)
    {
        system("CLS");
        cout<<"Device name	WEAPON-OF-DRAGONS\nProcessor	AMD Ryzen 5 3600 6-Core Processor                 3.59 GHz\nInstalled RAM	8.00 GB\nDevice ID	25B6B8B9-07E3-4F7D-B346-53A94C6B8BE9Product ID	00331-10000-00001-AA091\nSystem type	64-bit operating system, x64-based processor\nPen and touch	No pen or touch input is available for this display\n";
        cout<<"0.back\n:";
        cin>>sp;
        if(sp==0)
            return(0);
        else
            cout<<"invalid choice...";
    }
}

int software()      //software...
{
    int so;
    while(1)
    {
        system("CLS");
        cout<<"windows 10 pro \n0.back\n:";
        cin>>so;
        if(so==0)
            return(0);
        else
            cout<<"invalid choice...";
    }
}

int about()     //about..
{
    int ab;
    while(1)
    {
        system("CLS");
        cout<<"1.specifications \n2.software \n.0.back \n:";
        cin>>ab;
        if(ab==0)
            return 0;
        else if(ab==1)
            specifications();
        else if(ab==2)
            software();
        else
            cout<<"invalid choice..";
    }
}

int setting()      //settings..
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
            case 1: phone();break;
            case 2: display();break;
            case 3: language();break;
            case 4: about();break;
            default : cout<<"invalid choice........"<<endl;
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

int alaram()        //alaram..
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

int bluetooth()     //bluetooth....
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

int extra()     //extra...
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

int calculator()       //calculator..
{
    char ch;
    float n[100],sum=0,mean=0,pro=1,sq,rem=0,dev=0;
    int i,a;
    system("CLS");
    while(1)
    {
        cout<<"\n1.proceed\n0.back\n:";
        cin>>a;
        cout<<"\n";
        if(a==0)
            return 0;
        else if(a==1)
        {
            system("CLS");
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

int Rock_paper_scissor()        //game.....1...
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
            return 0;
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
            return 0;
        else if(u==1)
            continue;
        else
            cout<<"invalid choice....";
        goto start;
    }   
}

int games()     //games...choice...
{
    int g;
    while(1)
    {
        system("CLS");
        cout<<"1.Rock paper scissor.\n0.back\n:";
        cin>>g;
        if(g==0)
            return 0;
        else if(g==1)
            Rock_paper_scissor();
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
        cout<<"hello User..\n choose one of the options: \n 1.Menu\n 2.Contacts\n 3.Exit\n:";
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