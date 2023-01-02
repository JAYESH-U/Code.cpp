#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t,k;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>t;
    while(t--)
    {
        cin>>k;
        vector<int>::iterator iter = lower_bound(v.begin(),v.end(),k);
        if(*(iter+1) == k || *iter == k)
            cout<<"Yes "<<iter - v.begin()+1<<endl;
        else
            cout<<"No "<<iter - v.begin()+1<<endl;
    }
    return 0;
}
