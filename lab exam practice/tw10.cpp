#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    string fname,instream;
    cout << "enter the name of the file : ";
    cin >> fname;
    fname = fname + ".txt";
    file.open(fname, ios::out);

    if(!file)
    {
        cout<<"file is not created....."<<endl;
        return 0;
    }

    cout<<"file created succesfully...."<<endl;

    instream = "welcome_to_cpp_programming...";
    file << instream;

    file.close();

    file.open(fname,ios::in);

    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return 0;
    }
    char ch;
    cout<<"the file contents are : ";
    while(!file.eof())
    {
        file >> ch;
        cout << ch;
    }

    file.close();

    return 0;
}