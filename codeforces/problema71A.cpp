#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, tam;
    string S;
    cin >> n;
        while(n--){
            cin >> S;
            if(S.length() > 10){
                
            tam = S.length() - 2;
            char first = S[0];
            char last = S[S.length()-1];        
            cout <<"""""" <<first <<tam <<last <<endl;
            }else{
                cout << S <<endl;
            }
        }
    
    return 0;
}