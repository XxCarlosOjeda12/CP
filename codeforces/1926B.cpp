#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, cont = 0;
    cin >> n;
    vector<vector<char>>A(n,vector<char>(n));
    bool triangulo = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){
        cont = 0;
        for(int j = 0; j < n; j++){
            if(A[i][j] == '1') cont++;
        }

        if(cont == 1){
            triangulo = true;
        }
    }

    if(triangulo){
        cout << "TRIANGLE" <<"\n";
    }else{
        cout << "SQUARE" <<"\n";
    }

}

int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}