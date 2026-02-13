#include <bits/stdc++.h>
using namespace std;

#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define endl '\n'

int maxi(int a, int b, int c) {
    return max(a, max(b, c));
}

void solve(){
    int n, cont1 = 0, cont2 = 0, cont3 = 0;
    cin >> n;
    vector<int>A(n);
    forn(i,n){
        cin >> A[i];
    }

    forn(i,n){
        if(A[i] == 1) cont1++;
        else if(A[i] == 2) cont2++;
        else cont3++;
    }

    int k = maxi(cont1,cont2,cont3);

    cout << (n - k) << endl;
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}