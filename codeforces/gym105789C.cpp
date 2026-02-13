#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()


void solve(){
    int c, n;
    cin >> c >> n;
    vector<int> A(n);

    forn(i,n) cin >> A[i];

    int k = c + 1;
    int res = INT_MAX;
    
    for(int i = 0; i <= n - k; i++){
        int maxAct = A[i];
        for(int j = 1; j < k; j++){
            maxAct = max(maxAct, A[i + j]);
        }
        res = min(res, maxAct);
    }

    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
