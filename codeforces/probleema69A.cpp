#include <bits/stdc++.h>
using namespace std;
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
#define            endl                  '\n'

void solve(){

    int n;
    cin >> n;
    vector<int>xi,yi,zi;

    for(int i = 0; i < n; i++){
        int x,y,z;
        cin >> x >> y >> z;
        xi.pb(x);
        yi.pb(y);
        zi.pb(z);
    }

    int k = sz(xi), sumx = 0, sumy = 0, sumz = 0;

    for(int i = 0; i < k; i++){
        sumx += xi[i];
        sumy += yi[i];
        sumz += zi[i];
    }

    if((sumx == 0) && (sumy == 0) && (sumz == 0)){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
}


int main(){
    solve();
    return 0;
}