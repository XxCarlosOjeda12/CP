#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    bool flag = true;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += grid[j][i];
        }
        if(sum == 0){
            flag = false;
            break;
        }
    }   

    string res = (flag)? "Yes" : "No";
    cout << res << endl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}