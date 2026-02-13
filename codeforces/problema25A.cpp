#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    int n, contpar = 0, contimpar = 0, par = 0, impar = 0;
    cin >> n;
    vector<int>A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            contpar++;
        }else{
            contimpar++;
        }
    }

    if(contpar > contimpar){
        for(int i = 0; i < n; i++){
            if(A[i] % 2 != 0){
                impar = i;
            }
        }

        cout << (impar+1) << endl;
    }else{
        for(int i = 0; i < n; i++){
            if(A[i] % 2 == 0){
                par = i;
            }
        }

        cout << (par+1) << endl;

    }

}


int main(){
    solve();
    return 0;
}