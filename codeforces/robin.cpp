#include <bits/stdc++.h>
using namespace std;

int maximo(vector<int>&A){
    int n = A.size();
    sort(A.begin(), A.end());
    int maximo = A[n-1];
    return maximo;
}




void solve(){
    int n, acum = 0;
        cin >> n;  
        vector<int> oro(n);        
        for (int i = 0; i < n; i++) {
            cin >> oro[i];
            acum += oro[i];
        }
        if(n < 3){
            cout << -1 << endl;
        }else{
        int maxoro =  maximo(oro);
        int totaloro = acum;
        int x = 0; 
        while (true) {
            long long nuevototal = totaloro + x;
            double promedio = nuevototal / (double)n;   
            double mitadpromedio = promedio / 2.0;
            int infelices = 0;
           for(int i = 0; i < n; i++){
            if(oro[i] < mitadpromedio){
            infelices++;
            }
            }
            if (infelices > n / 2) {
                cout << x << endl;
                break;
            }
            if (maxoro + x < mitadpromedio) {
            infelices++;
            }
            x++;
        }
    }
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        solve();
    }

    return 0;
}

