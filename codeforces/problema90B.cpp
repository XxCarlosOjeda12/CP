#include "bits/stdc++.h"
using namespace std;
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()

 void solve(){

    int m, n;
    cin >> n >> m;

    vector<vector<char>>grid(n, vector<char>(m));
    unordered_set<char>s;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            s.insert(grid[i][j]);
        }
    }
 }

 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}