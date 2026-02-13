#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>A(n);
    int sumpar = 0, sumimpar = 0, res = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sumpar += A[i];
        }else{
            sumimpar += A[i];
        }
    }

    res = sumpar - sumimpar;
    cout << res << "\n";
    


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