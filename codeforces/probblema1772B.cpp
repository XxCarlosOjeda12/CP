#include <bits/stdc++.h>
using namespace std;


bool verificarM(vector<vector<int>>& A) {

    if((A[0][0] < A[0][1] && A[1][0] < A[1][1]) && (A[0][0] < A[1][0] && A[0][1] < A[1][1])) return true;
    return false;
}


void rotar(vector<vector<int>>& A) {
    int temp = A[0][0];
    A[0][0] = A[1][0];
    A[1][0] = A[1][1];
    A[1][1] = A[0][1];
    A[0][1] = temp;
} 

void solve(){

    vector<vector<int>>A(2, vector<int>(2));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    }
 
    bool res = verificarM(A);
    bool bandera = false;
    for(int i = 0; i < 4; i++){
        if(res){
            bandera = true;
            break;
        }
        rotar(A);
        res = verificarM(A);
    }
 
    if(bandera){
        cout <<"YES" <<"\n";
    }else{
        cout <<"NO" <<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}