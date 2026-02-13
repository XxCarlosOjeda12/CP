#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int verificaredades(vector<string>S, int n){
    vector<int>edades;
    for(int i = 0; i < n; i++){

        try
        {
            int n = stoi(S[i]);
            edades.push_back(n);
        }
        catch(const std::invalid_argument& e)
        {
             continue;
        }

    }
    

    int k = edades.size(), cont = 0;
    for(int i = 0; i < k; i++){
        if(edades[i] < 18){
            cont++;
        }
    }
     
    return cont;
}

void solve(){

    int n, cont = 0;
    cin >> n;
    vector<string>A(n);

    for(int i = 0; i < n; i++){
        cin >> A[i]; 
    }


    for(int i = 0; i < n; i++){
        if(A[i] == "ABSINTH" || A[i] == "BEER" || A[i] == "BRANDY" || A[i] == "CHAMPAGNE" || A[i] == "GIN" || A[i] == "RUM" || A[i] == "SAKE" || A[i] == "TEQUILA" || A[i] == "VODKA" || A[i] == "WHISKEY"  || A[i] == "WINE"){
            cont++;
        } 
    }

   int cont2 = verificaredades(A,n);

    cout << (cont + cont2) <<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}