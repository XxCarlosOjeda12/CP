#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int fav = A[f-1];

    int mayores = 0, iguales = 0;

    for(int i = 0; i < n; i++){
        if(A[i] == fav) iguales++;
        if(A[i] > fav) mayores++;
    }

    if(mayores >= k){
        cout << "NO" << endl;
    }else if((mayores + iguales) <= k){
        cout << "YES" << endl;
    }else{
        cout << "MAYBE" << endl;
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