#include <bits/stdc++.h>
using namespace std;

void operacion(int digito, vector<char>& A, vector<int>& R) {
    for (char c : A) {
        if (c == 'U') {
            digito = (digito + 1) % 10; 
        } else if (c == 'D') {
            digito = (digito - 1 + 10) % 10;  
        }
    }
    R.push_back(digito);  
}

void modificar(vector<char>& A) {
    for (char& c : A) {
        if (c == 'U') c = 'D';
        else if (c == 'D') c = 'U';
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> R;

    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < n; i++) {
        int tam;
        cin >> tam;
        vector<char> B(tam);
        for (int j = 0; j < tam; j++) cin >> B[j];
        
        modificar(B);
        operacion(A[i], B, R);
    }

    for (int r : R) cout << r << " ";
    cout << endl;
}

int main() {
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
