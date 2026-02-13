#include <bits/stdc++.h>
using namespace std;

void solve(){

    string a, b;
    cin >> a >> b;
    
    char aux;
    aux = a[0]; 
    a[0] = b[0];
    b[0] = aux;

    cout << a <<" " << b <<"\n";
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