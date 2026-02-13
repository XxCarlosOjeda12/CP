#include <iostream>
#include <string>
using namespace std;


bool esCad(const string& cadena) {
    string objetivo = "hellou";
    int n = objetivo.length();
    int indice = 0;

    for (char caracter : cadena) {
        if (caracter == objetivo[indice]) {
            indice++;
        }
        if (indice == n) {
            return true;  
        }
    }

    return false;  
}

void solve(){
    string S;
    int n = S.length();
    cin >> S;

    if (esCad(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {

 solve();
}
