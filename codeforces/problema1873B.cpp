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
    
    int n, acum = 1;
    cin >> n;
    vector<int> A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    A[0]++;

    for(int i = 0; i < n; i++){
        acum *= A[i];
    }

    cout << acum <<"\n";

}