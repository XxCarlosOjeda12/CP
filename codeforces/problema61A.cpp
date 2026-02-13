#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;   
    
    string result = "";
    
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) {
            result += '0'; 
        } else {
            result += '1';   
        }
    }
    
    cout << result << "\n";   

}

int main() {
    solve();
    return 0;
}
