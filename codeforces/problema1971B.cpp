#include <bits/stdc++.h>
using namespace std;

bool cadigual(string &s){
    int n = s.length();
    bool bandera = true;

    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i+1]){
            bandera = false;
        }
    }

    return bandera;
}

void solve(){
    string s;
    
    cin >> s;
    int tam = s.length();
    vector<char>A;


    if(cadigual(s)){
        cout <<"NO" <<"\n";
    }else{

        for(int i = 1; i < tam; i++){
            A.push_back(s[i]);
        }

        A.push_back(s[0]);
 
        cout <<"YES" <<"\n";
        for(auto e : A){
            cout << e;
        }
        cout <<"\n";

    }


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