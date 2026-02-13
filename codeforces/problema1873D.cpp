#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, k, cont = 0, p = 0, q = 0;
    string S;
    cin >> n >> k;
    cin >> S;

    
    for(int i = 0; i < n; i++){
        if(S[i] == 'B'){
            cont++;
            p = i;
            q = i + k - 1;
            i = q;   
        }
    }

    cout << cont << "\n";

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    
    return 0;
}