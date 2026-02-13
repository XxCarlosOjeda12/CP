#include <bits/stdc++.h>
using namespace std;

bool validarTodasMayusculas(string& S, int n){

    for(int i = 0; i < n; i++){
        if(!isupper(S[i])){
            return false;
        }
    }
    return true;
}

bool primerLetra(string& S){
    if(islower(S[0])){
        return true;
    }
     return false;
}


bool todasMenosLaPrimera(string& S, int n){

    for(int i = 1; i < n; i++){
        if(!isupper(S[i])){
            return false;
        }
    }
    return true;
}

void corregirPalabra(string& S, int n){
    S[0] = toupper(S[0]);
    for(int i = 1; i < n; i++){
        S[i] = tolower(S[i]);
    }

}

void corregirPalabra2(string& S, int n){
     
    for(int i = 0; i < n; i++){
        S[i] = tolower(S[i]);
    }

}


void solve(){
    string S;
    cin >> S;
    int n = S.length();
 


    if(primerLetra(S)  && todasMenosLaPrimera(S,n)){
        corregirPalabra(S,n);
        cout << S << endl;
    }else if(validarTodasMayusculas(S,n)){
        corregirPalabra2(S,n);
        cout << S << endl;
    }else{
        cout << S << endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

