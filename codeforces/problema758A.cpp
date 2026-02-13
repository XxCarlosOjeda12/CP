#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string>A(n);
    int tetra = 0, cube = 0, octa = 0, dode = 0, ico = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int  i = 0; i < n; i++){

        if(A[i] == "Tetrahedron"){
            tetra++;
        }

        if(A[i] == "Cube"){
            cube++;
        }
    
        if(A[i] == "Octahedron"){
            octa++;
        }

        if(A[i] == "Dodecahedron"){
            dode++;
        }

        if(A[i] == "Icosahedron"){
            ico++;
        }

    }

    int res = tetra*4 + cube*6 + octa*8 + dode*12 + ico*20;

    cout << res << "\n";


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}