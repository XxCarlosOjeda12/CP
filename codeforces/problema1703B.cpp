#include <bits/stdc++.h>
using namespace std;

void solve();

int main() { 
    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}

void solve(){
    int n, sum = 0;
    string S;
    vector<int> suma;
    unordered_set<char> letras; 
    cin >> n;
    cin >> S;
    
    for (int i = 0; i < n; i++) {
        char c = S[i];
        if (letras.count(c) > 0) {
            suma.push_back(1); 
        } else {
            suma.push_back(2); 
            letras.insert(c);  
        }
    }

     for (int val : suma) {
        sum += val;
    }

    cout << sum  << "\n";
}