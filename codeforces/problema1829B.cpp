#include <bits/stdc++.h>
using namespace std;

int maslarga(vector<int>& a) {
    int maxL = 0;
    int actualL = 0;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == 0) {
            actualL++;
            maxL = max(maxL, actualL);
        } else {
            actualL = 0;
        }
    }

    return maxL;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << maslarga(a) << endl;
    }

    return 0;
}


 