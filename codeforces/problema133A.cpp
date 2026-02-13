#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    string s;
    cin >> s;

    for(char c : s){
        if(c == 'H' || c == 'Q' || c == '9'){ 
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
