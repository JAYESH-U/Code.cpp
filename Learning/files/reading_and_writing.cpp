#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void read()
{
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    //in>>st2; //reads only one word.
    getline(in, st2);  
    cout<<st2;
}

int main(){
    string st = "Jayesh bhai";
    // Opening files using constructor and writing it
    // Write operation
    ofstream out("sample60.txt"); 
    out<<st;
    //create a file before executind this program , and 2lines below are useless,
    //because it will make a file with output stream and we cannot open the file with input stream when it is already opened
    // ofstream out1("sample60b.txt"); //write operation 2
    // out1<<"This is the second file.";
    read();
    return 0;
}