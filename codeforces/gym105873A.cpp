#include <bits/stdc++.h>
using namespace std;

bool validar(string& s, string& p) {
    int tams = s.size(), tamp = p.size();

    if (tamp % tams != 0) {
        return false;
    }

    int reps = tamp / tams;
    string aux = "";

    for (int i = 0; i < reps; i++) {
        aux += s;
    }

    if(aux == p){
        return true;
    }else{
        return false;
    }
}


void solve() {
    int n;
    string s, p;
    cin >> s;
    cin >> n;

    while (n--) {
        cin >> p;
        if (validar(s, p)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
