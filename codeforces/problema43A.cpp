#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    int n, cont1 = 0, cont2 = 0;
    cin >> n;
    vector<string>A(n);
    string s1, s2;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    if(n == 1){
        cout << A[0] << endl;
    }else{
        s1 = A[0];
        for(int i = 1; i < n; i++){
            if(A[i] != s1){
                s2 = A[i];
            }
        }

        for(int i = 0; i < n; i++){
            if(A[i] == s1){
                cont1++;
            }
            if(A[i] == s2){
                cont2++;
            }
        }

        if(cont1 > cont2){
            cout << s1 << endl;
        }else{
            cout << s2 << endl;
        }
    }
 
}

int main(){
    solve();
    return 0;
}