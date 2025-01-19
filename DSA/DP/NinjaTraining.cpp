// cannot train on the same task on consecutive days
#include <bits/stdc++.h>
using namespace std;

int ninjaRec(int day, int last, int n, vector<vector<int>>& tasks, int sum){
    if(day == 0){
        int maxp = 0;
        for(int i = 0; i < n; i++){
            if(i == last) continue;
            
            maxp = max(maxp, tasks[day][i]);
        }
        return maxp;
    }
    
    int maxp = 0;
    for(int i = 0; i < n; i++){
        if(i == last) continue;
        
        int points = tasks[day][i] + ninjaRec(day - 1, i, n, tasks, sum);
        
        maxp = max(maxp, points);
    }
    return maxp;
}

int ninjaMemo(int day, int last, int n, vector<vector<int>>& tasks, int sum, vector<vector<int>>& dp){
    if(day == 0){
        int maxp = 0;
        for(int i = 0; i < n; i++){
            if(i == last) continue;
            
            maxp = max(maxp, tasks[day][i]);
        }
        return maxp;
    }
    
    if(dp[day][last] != -1) return dp[day][last];
    
    int maxp = 0;
    for(int i = 0; i < n; i++){
        if(i == last) continue;
        
        int points = tasks[day][i] + ninjaMemo(day - 1, i, n, tasks, sum, dp);
        
        maxp = max(maxp, points);
    }
    return dp[day][last] = maxp;
}

int ninjaTab(int n, int m, vector<vector<int>>& tasks, vector<vector<int>>& dp){
    int maxi = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < m; k++){
                if(k == j) continue;
                
                dp[i + 1][j] = max(dp[i + 1][j], tasks[i][j] + dp[i][k]);
            }
        }
    }
    return dp[n][m - 1];
}

int ninjaSpaceOpt(int n, int m, vector<vector<int>>& tasks){
    vector<int> prev(m, 0);
    
    int maxi = 0;
    for(int i = 0; i < n; i++){
        vector<int> temp(m, 0); 
        for(int j = 0; j < m; j++){
            for(int k = 0; k < m; k++){
                if(k == j) continue;
                
                temp[j] = max(temp[j], tasks[i][j] + prev[k]);
            }
        }
        
        prev = temp;
    }
    return prev[m - 1];
}

int main() {
    vector<vector<int>> tasks = {
        {2, 1, 3},
        {3, 4, 6},
        {10, 1, 6},
        {8, 3, 7}
    };
    int n = tasks.size();
    int m = tasks[0].size();
    
    // int sum = ninjaRec(n - 1, -1, n, tasks, 0);
    
    // vector<vector<int>> dp(n, vector<int> (m + 1, -1));
    // int sum = ninjaMemo(n - 1, 3, n, tasks, 0 , dp);
    
    // vector<vector<int>> dp(n + 1, vector<int> (m , 0));
    // int sum = ninjaTab(n, m, tasks, dp);
    
    int sum = ninjaSpaceOpt(n, m, tasks);
    
    cout<<sum<<" ";

    return 0;
}