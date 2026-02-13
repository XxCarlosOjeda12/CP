#include <bits/stdc++.h>
using namespace std;
 
int sumamultiplos(int x, int n) {
    int k = n / x;  
    return x * (k * (k + 1)) / 2; 
}
 
int encontrar(int n) {
    int optimo = 2;
    int maxsuma = sumamultiplos(2, n);
 
    for (int x = 3; x <= n; ++x) {
        int actualsum = sumamultiplos(x, n);
        if (actualsum > maxsuma) {
            maxsuma = actualsum;
            optimo = x;
        }
    }
    return optimo;
}
 
int main() {
    int t;
    cin >> t;
    vector<int> respuestas;
 
    while (t--) {
        int n;
        cin >> n;
        respuestas.push_back(encontrar(n));
    }
 
    for (int resultado : respuestas) {
        cout << resultado << endl;
    }
 
    return 0;
}