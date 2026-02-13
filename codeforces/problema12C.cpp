#include <bits/stdc++.h>
using namespace std;

#define          all(precios)              precios.begin(), precios.end()
#define          rall(cantidades)              cantidades.rbegin(), cantidades.rend()


void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>precios(n);

    for(int i = 0; i < n; i++){
        cin >> precios[i];
    }

    map<string,int>frecuencia;

    for(int i = 0; i < m; i++){
        string fruta;
        cin >> fruta;
        frecuencia[fruta]++;
    }

    sort(all(precios));

    vector<int>cantidades;

    for(auto& e : frecuencia){
        cantidades.push_back(e.second);
    }

    sort(rall(cantidades));

    int minimo = 0;
    for(int i = 0; i < cantidades.size(); i++){
        minimo += cantidades[i] * precios[i] ;
    }

    int maximo = 0;
    for(int i = 0; i < cantidades.size(); i++){
        maximo += cantidades[i] * precios[n - 1 - i];
    }

    cout << minimo <<" " << maximo <<"\n";

}

int main(){
    solve();
    return 0;
}