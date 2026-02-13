#include <bits/stdc++.h>
using namespace std;

void solve(){
    string S, res;
    int contupp = 0, contlow = 0;
    cin >> S;
    int n = S.length();

    for(int i = 0; i < n; i++){
        if(isupper(S[i])){
            contupp++;
        }else if(islower(S[i])){
            contlow++;
        }
    }

    if(contupp > contlow){
        for(int i = 0; i < n; i++){
            S[i] = toupper(S[i]);
        }
    }else if(contlow > contupp || contlow == contupp){
        for(int i = 0; i < n; i++){
            S[i] = tolower(S[i]);
        }
    }

    cout << S << endl; 

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}