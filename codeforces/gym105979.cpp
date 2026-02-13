#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r,k;
    int cont = 0;
    cin >> l >> r >> k;

    for(int i = l; i <= r; i++){
        if(i % k == 0){
            cont++;
        }
    }

    cout << cont << endl;

}


int main(){
    solve();
    return 0;
}