#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()


void solve(){
    int n, k, contador = 0;
    cin >> n >> k;

    vector<int>v1(n), v2(n);

    forn(i,n) cin >> v1[i];
    forn(i,n) cin >> v2[i];


    sort(all(v1));
    sort(all(v2));

    for(int i = 0; i < n; i++){
        int suma = v1[i] + v2[i];
        if(suma <= k){
            k -= suma;
            contador++;
        }
    }
    

    cout << contador << endl;

}

int main(){   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}