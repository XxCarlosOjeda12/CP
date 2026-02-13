#include <bits/stdc++.h>
using namespace std;

#define  endl '\n'


void solve(){

    vector<vector<char>>grid(3,vector<char>(3));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> grid[i][j];
        }
    }

    int contA = 0, contB= 0, contC = 0;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(grid[i][j] == 'A') contA++;
            if(grid[i][j] == 'B') contB++;
            if(grid[i][j] == 'C') contC++;
        }
    }

    if(contA != 3){
        cout <<"A" <<endl;
    }else if(contB != 3){
        cout <<"B" <<endl;
    }else{
        cout <<"C" <<endl;
    }
    
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}