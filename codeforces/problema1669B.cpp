#include <bits/stdc++.h>
using namespace std;

void solve();
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    

    return 0;
}


void solve() {
    int n;
    cin >> n;
    multiset<int> numeros;
    
    int numero;
    for(int i = 0; i < n; i++) {
        cin >> numero;
        numeros.insert(numero);
    }
    
    
    bool bandera = false;
    for(int num : numeros) {
        if(numeros.count(num) >= 3) {
            cout << num << "\n";
            bandera = true;
            break;
        }
    }
    
    if(!bandera) {
        cout << "-1\n";
    }
}