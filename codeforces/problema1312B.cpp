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
    int n; 
    cin >> n;

    vector<int>A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    for(int i = 0; i < n; i++){
        cout<<" " << A[i];
    }
    cout<<"\n";


}