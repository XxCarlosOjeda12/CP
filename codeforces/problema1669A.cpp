#include <bits/stdc++.h>
using namespace std;

void solve();

int main(){


    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


void solve(){

    int rating;
    cin >> rating;

    if(rating >= 1900){
        cout <<"Division 1" <<"\n";
    }else if(rating >= 1600 && rating <= 1899){
        cout <<"Division 2" <<"\n";
    }else if(rating >= 1400 && rating <= 1599){
        cout <<"Division 3" <<"\n";
    }else{
        cout <<"Division 4" <<"\n";
    }

}