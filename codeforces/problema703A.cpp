#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, m, c, contm = 0, contc = 0, conte = 0;
    cin >> n;


    for(int i = 0; i < n; i++){
        cin >> m >> c;

        if(m > c){
            contm++;
        }else if(c > m){
            contc++;
        }else{
            conte++;
        }

    }

    if(contm > contc){
        cout <<"Mishka" <<"\n";
    }else if(contc > contm){
        cout <<"Chris" <<"\n";
    }else{
        cout <<"Friendship is magic!^^" <<"\n";
    }

}

int main(){
    solve();
    return 0;
}