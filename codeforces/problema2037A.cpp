#include <bits/stdc++.h>
using namespace std;


void solve();
bool validar(vector<int>A, int i);

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}

void solve(){
    int n, cont = 0;
    cin >> n;
    vector <int> A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    for(int i = 0; i < n - 1; i++){
        if(A[i] == A[i+1]){
            cont++;
            i++;
        }
    }

    cout << cont <<"\n";
    
}