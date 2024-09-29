// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>

using namespace std;

string rhymeWord(string a, string b[], int n){
    int* arr = new int[n]();
    int l = a.length();
    int i, j, k = 0, kn;
    
    while(k < n){
        if(a == b[k]) {
            k++;
            continue;
        }
        
        i = a.length() - 1;
        j = b[k].length()- 1;
        
        while(i and j and a[i] == b[k][j]){
            arr[k]++;
            i--, j--;
        }
        k++;
    }
    
    // checking hashing.. 
    // for(k = 0; k < n; k++){
    //     cout<<arr[k]<<" ";
    // }
    
    int maxi = 0;
    int ind = -1;
    for(k = 0; k < n; k++){
        if(maxi < arr[k]){
            maxi = arr[k];
            ind = k;
        }
    }
    
    return b[ind];
}

int main() {
    // Write C++ code here

    string a = "crime";
    string b[] = {"Dime", "crime", "prime", "rhyme"};
    
    cout<<rhymeWord(a, b, 4);
    return 0;
}