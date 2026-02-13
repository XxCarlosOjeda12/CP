#include <bits/stdc++.h>
using namespace std;


bool ganaTache(vector<vector<char>>&tablero, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((tablero[i][j] == 'X' && tablero[i][j+1] == 'X' && tablero[i][j+2] == 'X') || //Primer linea ganadora horizontal
             (tablero[i+1][j] == 'X' && tablero[i+1][j+1] == 'X' && tablero[i+1][j+2] == 'X') || //Segunda linea ganadora horizontal
             (tablero[i+2][j] == 'X' && tablero[i+2][j+1] == 'X' && tablero[i+2][j+2] == 'X') || //Tecer linea ganadora horizontal
             (tablero[i][j] == 'X' && tablero[i+1][j] == 'X' && tablero[i+2][j] == 'X') || //Primer linea ganadora vertical
             (tablero[i][j+1] == 'X' && tablero[i+1][j+1] == 'X' && tablero[i+2][j+1] == 'X') || //Segunda linea ganadora vertical
             (tablero[i][j+2] == 'X' && tablero[i+1][j+2] == 'X' && tablero[i+2][j+2] == 'X') || //Tercera linea ganadora vertical
             (tablero[i][j] == 'X' && tablero[i+1][j+1] == 'X' && tablero[i+2][j+2] == 'X') || // Linea ganadora vertical 
               (tablero[i][j+2] == 'X' && tablero[i+1][j+1] == 'X' && tablero[i+2][j] == 'X') // Linea ganadora vertical 
              ){
                return true;
              }
        }
    }
    return false;
}

bool ganaCirculo(vector<vector<char>>&tablero, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((tablero[i][j] == '0' && tablero[i][j+1] == '0' && tablero[i][j+2] == '0') || //Primer linea ganadora horizontal
             (tablero[i+1][j] == '0' && tablero[i+1][j+1] == '0' && tablero[i+1][j+2] == '0') || //Segunda linea ganadora horizontal
             (tablero[i+2][j] == '0' && tablero[i+2][j+1] == '0' && tablero[i+2][j+2] == '0') || //Tecer linea ganadora horizontal
             (tablero[i][j] == '0' && tablero[i+1][j] == '0' && tablero[i+2][j] == '0') || //Primer linea ganadora vertical
             (tablero[i][j+1] == '0' && tablero[i+1][j+1] == '0' && tablero[i+2][j+1] == '0') || //Segunda linea ganadora vertical
             (tablero[i][j+2] == '0' && tablero[i+1][j+2] == '0' && tablero[i+2][j+2] == '0') || //Tercera linea ganadora vertical
             (tablero[i][j] == '0' && tablero[i+1][j+1] == '0' && tablero[i+2][j+2] == '0') || // Linea ganadora vertical 
               (tablero[i][j+2] == '0' && tablero[i+1][j+1] == '0' && tablero[i+2][j] == '0') // Linea ganadora vertical 
              ){
                return true;
              }
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;
    vector<vector<char>>A(n, vector<char>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    if(ganaTache(A,n)){
        cout << "Ganó tache" <<endl;
    }else if(ganaCirculo(A,n)){
        cout << "Ganó circulo" <<endl;
    }else{
        cout <<"Empate" <<endl;
    }

}

int main(){

    solve();

    return 0;
}