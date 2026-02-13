
#include <bits/stdc++.h>
using namespace std;

bool raizCuadradaIt(long long valor) {
    if (valor < 0) return false;  

    long long inicio = 1, fin = 1e9;
    while (inicio <= fin) {
        long long mitad = (inicio + fin)/2;
        long long cuadrado = mitad * mitad;  

        if (cuadrado == valor) {
            return true;  
        } else if (cuadrado < valor) {
            inicio = mitad + 1;
        } else {
            fin = mitad - 1;
        }
    }
    return false;  
}

void solve(){

    long long n, acum = 0;
    cin >> n;
    vector<int>A(n);

    for(long long i = 0; i < n; i++){
        cin >> A[i];
    }

    for(long long i = 0; i < n; i++){
        acum += A[i];
    }

    if(raizCuadradaIt(acum)){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }


}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}