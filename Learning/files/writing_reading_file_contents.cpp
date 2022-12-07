#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name : ";
    cin >> name;

    // writing a string to the file
    hout << name + " is my name.";

    // disconnecting our file
    hout.close();
    // connecting our file with hin stream
    ifstream hin("sample60.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    getline(hin,content);   //read full sentence.
    //hin >> content;   //reads only one word
    cout << "The content of the file is : " << content;

    // disconnecting our file
    hin.close();
    return 0;
}