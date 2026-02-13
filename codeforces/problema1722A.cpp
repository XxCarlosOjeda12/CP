#include <bits/stdc++.h>
using namespace std;

bool tiene(const string& str, const string& caracteresRequeridos);

int main() {
    int t, n;
    string caracteresRequeridos = "Timur";
    string S;
    int longitud = caracteresRequeridos.size();

    cin >> t;
    while (t--) {
        cin >> n;
        cin >> S;

        
        if (n != longitud) {
            cout << "NO" << endl;
            continue;
        }

        if (tiene(S, caracteresRequeridos)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

bool tiene(const string& str, const string& caracteresRequeridos) {
    unordered_set<char> Set(caracteresRequeridos.begin(), caracteresRequeridos.end());
    for (char c : str) {
        Set.erase(c);
    }
    return Set.empty();
}