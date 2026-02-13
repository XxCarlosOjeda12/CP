#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    
    ll n,m;
    cin >> n >> m;
    
    vector<ll>A(n);
    vector<ll>dp(n), dp_rev(n);
    for(ll i = 0; i < n; i++){
        cin >> A[i];
    }

    dp[0] = 0;
    for(ll i = 1; i < n; i++)
    {
        if(A[i-1] <= A[i]){
            dp[i] = dp[i-1];
        }else{
            dp[i] = dp[i-1] + (A[i-1] - A[i]);
        }
    }

    dp_rev[n - 1] = 0;
    for (ll i = n-2; i >= 0; i--) {
        if (A[i+1] <= A[i]) {
            dp_rev[i] = dp_rev[i+1];
        } else {
            dp_rev[i] = dp_rev[i+1] + (A[i+1] - A[i]);
        }
    }

    while(m--){
        ll s,t;
        cin >> s >> t;
        if(s<t){
            cout << dp[t-1] - dp[s-1] <<"\n";
        }else{
            cout << dp_rev[t-1] - dp_rev[s-1] <<"\n";
        }
    }
    
}


int main(){
    solve();
    return 0;
}



 