#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    int l,d,r,u;
    cin >> l >> d >> r >> u;

    if(l == d && d == r && r == u){
        cout <<"YES" << endl;
    }else{
        cout <<"NO" << endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}