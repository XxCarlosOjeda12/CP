#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector<vector<char>>A(8,vector<char>(8));
    vector<char>res;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(A[i][j] !=  '.'){
                res.push_back(A[i][j]);
            }
        }
    }

    for(auto e : res){
        cout << e;
    }
    cout <<endl;


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