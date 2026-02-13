#include <bits/stdc++.h>
using namespace std;


void solve(){
 
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> result(n);

    for (int i = 0; i < n; ++i) {
        int giver;
        cin >> giver;
        result[giver - 1] = i + 1;
    }

     
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";

   
}



int main(){
    solve();
    return 0;
}