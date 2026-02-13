#include <bits/stdc++.h>
using namespace std;

void solve();

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}

void solve(){
    string S;
    cin >> S;
    if(S == "abc"){
        cout <<"YES" <<"\n";
    }else if (S == "acb")
    {
        cout <<"YES" <<"\n";
    }else if (S == "bac")
    {
        cout <<"YES" <<"\n";
    }else if(S == "cba"){
        cout <<"YES" <<"\n";
    }else{
        cout<<"NO" <<"\n";
    }
}