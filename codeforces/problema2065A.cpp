#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.length();
    s[n-1] = '\n';
    s[n-2] = 'i';
    cout << s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}