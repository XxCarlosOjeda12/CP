#include <bits/stdc++.h>
using namespace std;

void solve(){

    string S;
    cin >> S;
    int n = S.length();
    int cont = 0;
    string word = "codeforces";

    for(int i = 0; i < n; i++){
        if(S[i] != word[i]){
            cont++;
        }
    }

    cout << cont <<"\n";


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