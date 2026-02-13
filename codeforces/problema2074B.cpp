#include "bits/stdc++.h"
using namespace std;
 
#define endl '\n'
#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()

 void solve(){

    int n;
    cin >> n;
    vector<int>A(n);

    forn(i,n){
        cin >> A[i];
    }

    if(n == 1){
        cout << A[0] << endl;
    }else{
        int k, sum = 0;

        forn(i,n){
            sum += A[i];
        }

        k = sum - n + 1;

        cout << k << endl;

    }
    
 }

 
int main() {
    int t;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--) {
        solve();
    }
}