#include <bits/stdc++.h>
using namespace std;

void solve(){
    int rows, columns = 4;
    cin >> rows;
    vector<vector<char>>A(rows,vector<char>(columns));
    vector<int>pos;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(A[i][j] == '#'){
                pos.push_back(j+1);
            }
        }
    }

    reverse(pos.begin(), pos.end());

    for(auto e : pos){
        cout << e <<" ";
    }
    cout << "\n";


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