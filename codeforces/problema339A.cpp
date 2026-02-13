#include <bits/stdc++.h>
using namespace std;

 
void solve() {
    string S;
    cin >> S;

    vector<char> A;

    int n1 = S.length();
    for (int i = 0; i < n1; i++) {
        if (isdigit(S[i])) {
            A.push_back(S[i]);
        }
    }
    int n2 = A.size();
    sort(A.begin(), A.end());

 
    for (int i = 0; i < n2; i++) {
        cout << A[i];
        if (i != n2 - 1) { 
            cout << '+';
        }
    }
    cout << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}