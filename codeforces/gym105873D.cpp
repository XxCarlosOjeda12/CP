#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int K;
    cin >> K;
    
    vector<long long> ingredientes(K);
    for (int i = 0; i < K; i++) {
        cin >> ingredientes[i];
    }
    
    int N;
    cin >> N;
    
    vector<vector<long long>> pedidos(N, vector<long long>(K));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cin >> pedidos[i][j];
        }
    }
    
    vector<long long> consumoDiario(K, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            consumoDiario[j] += pedidos[i][j];
        }
    }
    
    long long maximoNumDiasCompl = LLONG_MAX;
    for (int i = 0; i < K; i++) {
        if (consumoDiario[i] > 0) {
            maximoNumDiasCompl = min(maximoNumDiasCompl, ingredientes[i] / consumoDiario[i]);
        }
    }
    
    if (maximoNumDiasCompl == 0) {
        vector<long long> ingredientesAct = ingredientes;
        for (int i = 0; i < N; i++) {
            bool sePuede = true;
            for (int j = 0; j < K; j++) {
                if (ingredientesAct[j] < pedidos[i][j]) {
                    sePuede = false;
                    break;
                }
            }
            
            if (!sePuede) {
                cout << 1 << " " << (i + 1) << endl;
                return 0;
            }
            
            for (int k = 0; k < K; k++) {
                ingredientesAct[k] -= pedidos[i][k];
            }
        }
    }
    
    vector<long long> inventarioRestante(K);
    for (int i = 0; i < K; i++) {
        inventarioRestante[i] = ingredientes[i] - maximoNumDiasCompl * consumoDiario[i];
    }
    
    long long diaActual = maximoNumDiasCompl + 1;
    
    while (true) {
        for (int i = 0; i < N; i++) {
            bool sePuede = true;
            for (int j = 0; j < K; j++) {
                if (inventarioRestante[j] < pedidos[i][j]) {
                    sePuede = false;
                    break;
                }
            }
            
            if (!sePuede) {
                cout << diaActual << " " << (i + 1) << endl;
                return 0;
            }
            
            for (int k = 0; k < K; k++) {
                inventarioRestante[k] -= pedidos[i][k];
            }
        }
        diaActual++;
    }
    
    return 0;
}