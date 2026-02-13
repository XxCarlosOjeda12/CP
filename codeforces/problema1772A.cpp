#include <bits/stdc++.h>
using namespace std;

void solve(){
    string S;
    cin >> S;
    int a = S[0] - '0', b = S[2] - '0'; 
    int sum = a + b;
    cout << sum <<"\n";
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