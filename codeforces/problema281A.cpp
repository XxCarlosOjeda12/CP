#include <bits/stdc++.h>
using namespace std;


void solve(){

    string S;
    cin >> S;
    int n = S.length();
    for(int i = 0; i < n; i++){
        if(islower(S[0])){
            S[0] = toupper(S[0]);
        }
    }

    cout << S;


}

int main(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}