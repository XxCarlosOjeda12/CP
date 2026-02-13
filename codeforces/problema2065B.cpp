#include <bits/stdc++.h>
using namespace std;

bool validarCad(string &s, int n){

    for(int i = 0; i < n; i++){
        if(s[i] == s[i+1]){
            return true;
        }
    }
    return false;
}

void solve(){   
    string s;
    cin >> s;
    int n = s.length();
    
    if(validarCad(s,n)){
        cout << "1" <<"\n";
    }else{
        cout << n << "\n";
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}