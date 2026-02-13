#include <bits/stdc++.h>
using namespace std;



void solve(){
    int a, b, c , d, cont = 0;

    cin >> a >> b >> c >> d;

    if(a < b){
        cont++;
    }
    if(a < c){
        cont ++;
    }
    if(a < d){
        cont++;
    }

    cout << cont << endl;



}


int main(){ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
       solve(); 
    }

    return 0;
}