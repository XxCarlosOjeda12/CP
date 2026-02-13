#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    
    int dispo = 0;   
    int nohay = 0;    
    
    for (int i = 0; i < n; i++) {
        int evento;
        cin >> evento;
        
        if (evento == -1) {  
            if (dispo > 0) {
                
                dispo--;
            } else {
                 
                nohay++;
            }
        } else {
             
            dispo += evento;
        }
    }
    
    cout << nohay << "\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

 
 