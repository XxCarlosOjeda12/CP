#include <bits/stdc++.h>
using namespace std;

 
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
void solve(int n, int m) {
    vector<int> primos;
    int numero = 2;  
    bool bandera = false;

    while (primos.size() < 50) {  
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
        numero++;
    }

    for(int i = 0; i < m; i++){
        if((n == primos[i]) && (m == primos[i+1])){
            bandera = true;
        }
    }

    if(bandera){
        cout << "YES" <<"\n";
    }else{
        cout << "NO" <<"\n";
    }
}



int main() {
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int n, m;
     cin >> n >> m;
     solve(n,m);

    return 0;
}
