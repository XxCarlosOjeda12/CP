#include<bits/stdc++.h>
using namespace std;
 
void reemplazar(string &S ,int posicion, int valor);
bool esSubcadena(string &S);
void solve();


int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

 

void reemplazar(string &S ,int posicion, int valor){
    
    if(valor == 1){
        S[posicion - 1] = '1';
    }
    if(valor == 0){
        S[posicion - 1] = '0';
    }
    
}

bool esSubcadena(string &S){
    string subS = "1100";

    S.find(subS);

    if(S.find(subS) != string :: npos){
        return true;
    }

    return false;
}




void solve(){

    string S;
    int q, posicion, valor;

    cin >> S;
    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> posicion >> valor;

        reemplazar(S, posicion, valor);
        if(esSubcadena(S)){
            cout <<"YES" <<"\n";
        }else{
            cout <<"NO" <<"\n";
        }
    }

}