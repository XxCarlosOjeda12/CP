#include "bits/stdc++.h"
using namespace std;
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define  endl   '\n'

 void solve(){

    int n;
    cin >> n;
    set<int> s;
    forn(i,n){
        int x;
        cin >> x;
        s.insert(x);
    }

    if(s.size() < 2){
        cout <<"NO" <<endl;
    }else{
        auto it = s.begin();
        auto it2 = next(it,1);
        cout << *it2 <<endl;
    }

 }

 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve(); //
    return 0;
}