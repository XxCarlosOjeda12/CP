#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    for(int i = 0; i < n; i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if(s1 > s2){
        cout << 1 << "\n";
    }else if(s2 > s1){
        cout << -1 << "\n";
    }else{
        cout << 0 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}