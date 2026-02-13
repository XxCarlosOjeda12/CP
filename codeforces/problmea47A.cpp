#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()


void solve(){

    int n;
    cin >> n; 

    int k = 500;
    vector<int> gauss (k);

    for(int i = 1; i <= k; i++){
        gauss[i-1] = (i*(i+1))/2;
        
    }

    int found = -1;

    for(int i = 0; i < k; i++){
        if(n == gauss[i]){
            found = 1;
            break;
        } 
    }


    if(found == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
