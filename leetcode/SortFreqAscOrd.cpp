#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n){
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    sort(arr, arr+n, [&](int a, int b){
        if(mp[a] == mp[b]){
            return a>b;
        }
        return mp[a]<mp[b];
    });
}

int main()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};

    sortArr(arr, 8);

    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}