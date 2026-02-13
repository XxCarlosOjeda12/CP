#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,k;
    cin >> n >> k;
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int puntaje = A[k-1], cont = 0;

    for(int i = 0; i < n; i++){
        if(A[i] == 0){
            continue;
        }
        if(A[i] >= puntaje){
            cont++;
        }   
    }

    cout << cont << "\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}