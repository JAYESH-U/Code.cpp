// Write a C++ program that creates a text file, check file created or not, if created it will write some text into the file and then read the text from the file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file; // object of fstream class
    string fname, instream;
    // opening file "sample.txt" in out(write) mode
    cout << "Enter the Name of the text file to Create: \n";
    cin >> fname;
    fname = fname + ".txt";
    file.open(fname, ios::out);

    if (!file)
    {
        cout << "Error in creating file!!!" << endl;
        return 0;
    }

    cout << "File created successfully." << endl;

    // write text into file
    instream = "Welcome_to_C++_programming.";
    file << instream;
    
    // closing the file
    file.close();

    // again open file in read mode

    file.open(fname, ios::in);

    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return 0;
    }

    // read untill end of file is not found.
    char ch; // to read single character
    cout << "File content: ";

    while (!file.eof())
    {
        file >> ch; // read single character from file
        cout << ch;
    }

    file.close(); // close file

    return 0;
}