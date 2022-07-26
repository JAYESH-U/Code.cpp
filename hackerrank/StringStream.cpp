#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> out;
    stringstream ss(str);
    
    char ch;
    int temp;
    
    while (ss >> temp)  //just like cin>> temp
    {
        out.push_back(temp); //appending..
        ss>>ch;     //accepting charectors also ","
    }
    return out;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}