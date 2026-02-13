#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n){
    if(n < 2) return false;  
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    return cont == 2;
}

int main(){
    int n = 100;
    vector<int> primos;  
    for(int i = 1; i <= n; i++){
        if(esPrimo(i)){
            primos.push_back(i);
        }
    }

    for(auto x : primos){
        cout << x <<" ";
    }

    return 0;
}
