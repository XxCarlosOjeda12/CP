#include <bits/stdc++.h>
using namespace std;

bool esDiv(int i, int n){
    if(i % n == 0){
        return true;
    }
    return false;
}

void solve(){

    int n, k;
    cin >> n >> k;

    vector<int>A;

    for(int i = 1; i <= 1e9; i++){
        if(!esDiv(i,n)){
            A.push_back(i);
        }
    }
    
    cout << A[k - 1] <<endl;


}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
   
    return 0;
}