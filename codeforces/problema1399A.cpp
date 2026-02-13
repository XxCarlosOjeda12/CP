#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    bool bandera = true;
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

for (int i = 0; i < n - 1; i++) {
    if (abs(A[i] - A[i+1]) > 1) {
        bandera = false;
        break;
    }
}


    if(bandera){
        cout << "YES" <<"\n";
    }else{
        cout << "NO" <<"\n";
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