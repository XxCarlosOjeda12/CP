#include <bits/stdc++.h>
using namespace std;

void solve();

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int n, guardar;
    cin >> n;
    vector<int> A(n);
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
 
 

    if(A[0] == A[1]){
        guardar = A[0];
    }else{
        guardar = A[2];
    }
    
 
    for(int i = 0; i < n; i++){
        if(A[i] != guardar){
            cout << i + 1 << endl; 
            break;
        }
    }
}
