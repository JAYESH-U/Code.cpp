#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*
1 : Add an element  to the set.
2 : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
3 : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int temp;
    set<int> s;
    for (int i=0; i<n; i++) {
        int c,ele;
        cin>>c>>ele;
        if(c == 1)
            s.insert(ele);
        else if(c == 2)
            s.erase(ele);
        else if(c == 3)
            cout<<(s.find(ele) == s.end()? "No" : "Yes")<<endl;
    }
    return 0;
}