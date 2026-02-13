#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>A(n);
    vector<int>index;

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        if(A[i] >= m){
            index.push_back(i+1);
        }
    }

    if(index.size() == 0){
        cout <<"-1" << endl;
    }else{
        auto minimo = min_element(index.begin(), index.end());
        cout << *minimo << endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}