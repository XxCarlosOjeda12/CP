#include <bits/stdc++.h>
using namespace std;

bool validarLowUp(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isalnum(s[i])) {  
            return false;
        }
    }
    return true;
}

bool tieneVocal(string s) {
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
    }
    return false;
}

bool tieneConsonante(string s) {
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            return true;
        }
    }
    return false;
}

bool isValid(string word) {
    if (word.length() < 3) {
        return false;
    }

    if (validarLowUp(word) && tieneVocal(word) && tieneConsonante(word)) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    string s;
    cin >> s;

    if (isValid(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
    return 0;
}
