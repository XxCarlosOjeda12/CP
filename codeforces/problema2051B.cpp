#include <bits/stdc++.h>
using namespace std;

void solve() {
 
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        vector<long long> dist = {a, b, c};
        long long sumaciclo = a + b + c;  
 
        long long izq = 1, der = 1e9, dia = -1;

        while (izq <= der) {
            long long mid = izq + (der - izq) / 2;

          
            long long cicompl = mid / 3;   
            long long res = mid % 3;     
            long long total = cicompl * sumaciclo;

            for (int i = 0; i < res; ++i) {
                total += dist[i];
            }

            
            if (total >= n) {
                dia = mid; 
                der = mid - 1; 
            } else {
                izq = mid + 1; 
            }
        }

        cout << dia << "\n";  
 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
