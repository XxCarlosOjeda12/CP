#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , cont = 0;
    cin >> n;
    string S = to_string(n);
    int n1 = S.length();
    for(int i = 0; i < n1; i++){
        if(S[i] == '7' || S[i] == '4') cont++;
   
    }
    
    if(cont == 7 || cont == 4){
        cout << "YES" <<"\n";
    }else{
        cout << "NO" <<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve(); 
    return 0;
}