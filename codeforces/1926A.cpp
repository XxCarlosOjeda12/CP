#include <bits/stdc++.h>
using namespace std;

void solve(){   

    string s;
    cin >> s;
    int n = s.length(), conta = 0, contb = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') conta++;
        if(s[i] == 'B') contb++;
    }

    if(conta > contb){
        cout << "A" <<"\n";
    }else{
        cout << "B" <<"\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}