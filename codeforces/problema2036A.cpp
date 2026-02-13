#include <bits/stdc++.h>
using namespace std;

void solve();

int Abs(int a, int b);

int main(){

    int t;
    cin >> t;
    while(t--){
    solve();
    }
    

    return 0;
}


void solve(){

    int n, resta = 0;
    bool bandera;

    cin >> n;
    vector<int>A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    bandera = false;
    for(int i = 0; i < n - 1 ; i++){
        
        resta = Abs(A[i], A[i+1]);
        if(resta == 5 || resta == 7){
            bandera = true;
        }else{
            bandera = false;
            break;
        }
    }

    if(bandera){
        cout <<"YES" <<"\n";
    }else{
        cout <<"NO" <<"\n";
    }

}

int Abs(int a, int b){
    int resta, val;
    resta = a - b;
    if(resta < 0){
        val = (-1)*resta;
    }else{
        val = resta;
    }
    return val;
}