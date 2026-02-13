#include <bits/stdc++.h>
using namespace std;

void solve();

int main(){

    solve();

    return 0;
}

void solve(){

    int n, resta = 0, cont = 0;

    
    cin >> n;
    int p[n], q[n];

    for(int i = 0; i < n; i++){
        cin >> p[i] >> q[i];
    }

    for(int i = 0; i < n; i++){
        resta = q[i] - p[i];
        if(resta >= 2){
            cont++;
        }
    }

    cout << cont;


}

