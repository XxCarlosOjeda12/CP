#include <iostream>
#include <vector>
using namespace std;


void solve(){

    int n;  
    cin >> n;
    
    vector<int> grupos(5, 0);  
    for (int i = 0; i < n; i++) {
        int si;
        cin >> si;
        grupos[si]++;
    }

    int taxis = 0;

    taxis += grupos[4];
   
    taxis += grupos[3];  
    if (grupos[1] >= grupos[3]) {
        grupos[1] -= grupos[3];
    } else {
        grupos[1] = 0;  
    }
 
    taxis += grupos[2] / 2;  
    if (grupos[2] % 2 != 0) {
 
        taxis++;  
        if (grupos[1] >= 2) {
            grupos[1] -= 2;  
        } else {
            grupos[1] = 0;  
        }
    }

    taxis += grupos[1] / 4; 
    if (grupos[1] % 4 != 0) {
        taxis++;  
    }
    cout << taxis << "\n";

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
