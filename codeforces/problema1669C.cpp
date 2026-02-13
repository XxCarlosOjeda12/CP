#include <iostream>
#include <vector>
using namespace std;

bool sePuede(const vector<int>& arr, int n) {
 
    int par = arr[0] % 2;  
    int impar = arr[1] % 2; 

    for (int i = 0; i < n; i += 2) {
        if (arr[i] % 2 != par) {
            return false;  
        }
    }

    for (int i = 1; i < n; i += 2) {
        if (arr[i] % 2 != impar) {
            return false;  
        }
    }

    return true; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (sePuede(arr, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
