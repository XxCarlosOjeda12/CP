#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector<vector<int>>A(5,vector<int>(5));
    int posx = 0, posy = 0, coordx = 0, coordy = 0, sum = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
             if(A[i][j] == 1){
                posx = i;
                posy = j;
            }
        }
    }

    coordx = abs(2-posx);
    coordy = abs(2-posy);
    sum = coordx + coordy;

    cout <<  sum << "\n";


}


int main(){     
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}