#include <bits/stdc++.h>
using namespace std;

void solve(){

    string S;
    cin >> S;
    int n = S.length();
    for(int i = 0; i < n; i++){
        if(S[i] == 'p'){
            S[i] = 'q';
        }else if(S[i] == 'q'){
            S[i] = 'p';
        }else{
            continue;
        }
    }
    reverse(S.begin(),S.end());
    cout << S <<"\n";

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