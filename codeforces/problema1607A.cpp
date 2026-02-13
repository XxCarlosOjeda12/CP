#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s1, s2;
    cin >> s1;
    cin >> s2;
    int tam1 = s1.length(), tam2 = s2.length();
    vector<int> val(tam2);

    for(int i = 0; i < tam2; i++){
        for(int j = 0; j < tam1; j++){
            if(s2[i] == s1[j]){
                val[i] = j;
            }
        }
    }
    int aux = 0;
    for(int i = 1; i < tam2; i++){
        aux += abs(val[i-1] - val[i]);
    }

    cout << aux << endl;

}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}