#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void read()
{
    system("CLS");

    string st2,st1;
    ifstream in,in1;    // Opening files using constructor and reading it
    in.open("sample60.txt");    // Read operation
    //in>>st1;     //reads only one word.
    getline(in,st1);
    cout<<st1<<endl;
    in.close();

    in1.open("sample60b.txt");
    getline(in1, st2);  
    cout<<st2<<endl;
    in1.close();
}

int main(){
    string st = "This is the first file.";
    // Opening files using constructor and writing it
    // Write operation
    ofstream out("sample60.txt"); 
    out<<st;
    out.close();
    ofstream out1("sample60b.txt"); //write operation 2
    out1<<"This is the second file.";
    out1.close();
    read();
    return 0;
}