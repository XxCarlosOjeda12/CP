#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, cont = 0, cont2 = 0;
    string S;
    cin >> n;
    cin >> S;
    int tam = S.length();

    for(int i = tam - 1; i >= 0; i--){
        if(S[i] == ')'){
            cont++;
        }else{
            break;
        }
    }
    
    if(cont > n - cont){
        cout << "YES" <<endl;
    }else{
        cout <<"NO" <<endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}