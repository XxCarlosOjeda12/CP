#include <bits/stdc++.h>
using namespace std;

void solve(){

    for(int i = 1; i < 5; i++){
        
        for(int k = 5; k >= i; k--){
            cout <<" ";
        }
        
        for(int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout <<endl;
    }

}

int main(){
    solve();
    return 0;
}