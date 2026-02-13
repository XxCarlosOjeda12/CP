#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> alturas(n);
    
    for (int i = 0; i < n; i++) {
        cin >> alturas[i];
    }
    
    
    int maxi = alturas[0], max_i = 0;
    for (int i = 1; i < n; i++) {
        if (alturas[i] > maxi) {
            maxi = alturas[i];
            max_i = i;
        }
    }
    
     
    int mini = alturas[0], min_i = 0;
    for (int i = 1; i < n; i++) {
        if (alturas[i] <= mini) { 
            mini = alturas[i];
            min_i = i;
        }
    }
    

    int swaps = max_i + (n - 1 - min_i);
    if (max_i > min_i) {
        swaps--; 
    }
    
    cout << swaps << endl;

}

int main() {    
    solve();
    return 0;   
}
