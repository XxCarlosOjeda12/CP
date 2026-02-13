#include <bits/stdc++.h>
using namespace std;

bool esCuadrada(string& s){
    int n = s.length();
    if(n % 2 != 0) return false;

    string primeraMitad = s.substr(0,n/2);
    string segundaMitad = s.substr(n/2);

    if(primeraMitad == segundaMitad){
        return true;
    }
    
    return false;
}

void solve(){

    string s;
    cin >> s;

    if(esCuadrada(s)){
        cout <<"YES" <<"\n";
    }else{
        cout <<"NO" <<"\n";
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