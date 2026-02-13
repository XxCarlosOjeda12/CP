#include <bits/stdc++.h>
using namespace std;

int techo(int a, int b){

    if(a%b==0){
        return a/b;
    }else{
        return (a+b-1)/b;
    }
}

void solve(){

    int x, y, k, res, saltox, saltoy;

    cin >> x >> y >> k;

    
    saltox = techo(x,k);
    saltoy = techo(y,k);
    
    if(saltox > saltoy){
        res = 2*saltox - 1;
    }else{
        res = 2*saltoy;
    }

    cout << res <<"\n";
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