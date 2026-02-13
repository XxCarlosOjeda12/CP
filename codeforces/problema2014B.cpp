#include <bits/stdc++.h> 
using namespace std;
 
 
void solve(){
    int n,k;
    cin >> n >> k;
 
    cout << (((n+1)*n/2 - (n-k)*(n-k+1)/2)%2?"NO":"YES") << '\n';
}
 
int main(){
 
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}