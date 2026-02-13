#include <bits/stdc++.h>
using namespace std;

#define all(h) h.begin(), h.end()

void solve(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    sort(all(h));  
    vector<int> res(n);
    int mid = (n - 1) / 2;   

    int izq = mid, der = mid + 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            res[izq--] = h[i];  
        } else {
            res[der++] = h[i];  
        }
    }

    for (auto x : res) {
        cout << x << " ";
    }
    cout << "\n";
}

int main(){
    solve();
    return 0;
}
