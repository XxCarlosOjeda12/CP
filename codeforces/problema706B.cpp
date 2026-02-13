#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define          all(v)              v.begin(), v.end()
#define            pb                push_back
#define          sz(a)               (int)a.size()

void solve(){

    int n;
    cin >> n;
    vector<int>x(n);

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    int q;
    cin >> q;
    vector<int>m(q);
    for(int i = 0; i < q; i++){
        cin >> m[i];
    }

    vector<int>res;

    sort(all(x));
    
    for(int i = 0; i < q; i++){
        auto lb = upper_bound(all(x), m[i]);
        int r = lb -  x.begin();
        res.pb(r);
        r = 0;
    }
    
    for(auto x : res){
        cout << x << endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}


