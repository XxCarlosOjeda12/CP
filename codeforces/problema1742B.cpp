#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int>A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    bool bandera = false;
    sort(A.begin(), A.end());
    for(int i = 0; i < n - 1; i++){
        if(A[i] == A[i + 1]){
            bandera = true;
            break;
        }
    }

    if(bandera){
        cout <<"NO" <<endl;
    }else{
        cout <<"YES" <<endl;
    }


}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}