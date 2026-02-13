#include <bits/stdc++.h>
using namespace std;

 

int solve(int n) {
    int count = 0;

     
    for (int d = 1; d <= 9; ++d) {
        long long num = d;  
 
        while (num <= n) {
            count++; 
            num = num * 10 + d;  
        }
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;  
    cin >> t;
    while (t--) {
        int n;  
        cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}
