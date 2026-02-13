#include <bits/stdc++.h>
using namespace std;

pair<int, int> ordenar(vector<int> A) {
    int n = A.size();
    sort(A.begin(), A.end());
    int max1 = A[n - 1];  
    int max2 = A[n - 2];  

    return {max1, max2};  
}

void solve(){
    int n;
    cin >> n;
    vector<int>A(n);
    vector<int>B(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    pair <int,int> res = ordenar(A);
    int max1 = res.first;
    int max2 = res.second;
    
    for(int i = 0; i < n; i++){
        if(A[i] == max1){
            B[i] = A[i] - max2;

        }else{
            B[i] = A[i] - max1;
        }
    }

    for(auto i : B){
        cout << i <<" ";
    }
    cout << "\n";


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

