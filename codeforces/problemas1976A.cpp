#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool ordenado(string &s){
    if(is_sorted(s.begin(),s.end())){
        return true;
    }
    return false;
}

bool validarNum(string &s, int n){
    for(int i = 0; i < n; i++){
        if(!isdigit(s[i])) return false;
    }
    return ordenado(s);
}

bool validarAbc(string &s, int n){
    for(int i = 0; i < n; i++){
        if(!isalpha(s[i])) return false;
    }
    return ordenado(s);
}   

bool validarletrasNum(string &s, int n){
    for(int i = 1; i < n; i++){
        if(isalpha(s[i-1]) && isdigit(s[i])){
            return false;
        }
    }
    return true;
}



void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;

    if(validarNum(s,n) || validarAbc(s,n)){
        cout << "YES" <<endl;
        return;
    }
    if(validarletrasNum(s,n) && ordenado(s)){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
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