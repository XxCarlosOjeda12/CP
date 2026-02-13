#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 200000;

int sumadeDigitos(int n){
    string num = to_string(n);
    int tam = num.length(), sum = 0;
    for(int i = 0; i < tam; i++){
        int x = num[i] - '0';
        sum += x;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> dp(MAX);
    for (int i = 1; i <= MAX; i++) 
    { 
        dp[i] = dp[i-1] + sumadeDigitos(i);
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] <<"\n";
    }

    return 0;
}