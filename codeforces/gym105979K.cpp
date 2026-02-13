#include <bits/stdc++.h>
using namespace std;
 
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()

void solve(){
    int n, k, cont = 0;
    cin >> n >> k;

    vector<int> sl(n), sr(n);

    forn(i, n) cin >> sl[i];
    forn(i, n) cin >> sr[i];

    sort(all(sl));
    sort(all(sr));

    forn(i, n){
        int suma = sl[i] + sr[i];
        if(suma <= k){
            k -= suma;        
            cont++;
        }
    }

    cout << cont << endl;
}

int main(){
    solve();
    return 0;
}
