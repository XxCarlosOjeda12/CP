#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int n1 = s1.length();
    int n2 = s2.length();

    if(n1 != n2){
        cout <<"NO" <<"\n";
    }else{

    reverse(s1.begin(), s1.end());
    bool bandera = true;
    int n = s1.length();
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]){
            bandera = false; 
            break;
        } 
    }

    if(bandera){
        cout <<"YES" <<"\n";
    }else{
        cout <<"NO" <<"\n";
    }
    }

}


int main(){
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}