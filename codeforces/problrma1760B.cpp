#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    string S;
    cin >> n;
    cin >> S;

    sort(S.begin(), S.end());
    int l = abs(96 - S[n-1]); 
    cout << l <<"\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}