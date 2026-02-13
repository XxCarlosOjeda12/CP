#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int n;
    cin >> n;

    map<string, int> mp;  

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (mp[s] == 0) {
            mp[s] = 1;
            cout << "OK\n";
        } else {  
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
}

 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

/*
void copia() { //CON MULTISET NO ENTRA EN TIEMPO
    string s;
    int n;
    cin >> n;
    multimap<string, int> mp; 
    multimap<string, int>::iterator it;

    for (int i = 0; i < n; i++) {
        cin >> s;
        it = mp.find(s);  

        if (it == mp.end()) {
 
            mp.insert({s, 1});
            cout << "OK\n";
        } else {
             
            int contar = mp.count(s);
            cout << s << contar << endl;

           
            mp.insert({s, contar + 1});
        }
    }
}
*/
