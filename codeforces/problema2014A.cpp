#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    int oro = 0, cont = 0;
    cin >> n >> k;
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){

        if(A[i] >= k){
            oro += A[i];
        }

        if(A[i] == 0 && oro > 0){
            oro--;
            cont++;
        }

    }

    cout << cont << "\n";

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