#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    vector<int> dp(n+1);
    dp[0] = 1;   
    dp[1] = 1;   

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int climbStairs(int n) {
    vector<int> dp(n+1);
    dp[0] = 1;   
    dp[1] = 1;   

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){ 
    cout << climbStairs(2) << endl; // 2
    cout << climbStairs(3) << endl; // 3
    cout << climbStairs(4) << endl; // 5
    return 0;
}
