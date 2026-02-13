#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    bool bandera;

    string respuestas[] = {"yes", "yeS", "yEs", "yES", "Yes", "YeS", "YEs", "YES"}; //2^3

    int t;
    cin >> t;
    while (t--) {
        cin >> S;
        bandera = false;   

        for (int i = 0; i < 8; i++) {
            if(respuestas[i] == S){
                bandera = true;
                break;
            }
        }

        if(bandera){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}


#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool hasAllCharacters(const string& str, const string& requiredChars) {
    // Convertimos los caracteres requeridos a un conjunto (para evitar duplicados)
    unordered_set<char> requiredSet(requiredChars.begin(), requiredChars.end());

    // Recorremos la cadena y eliminamos los caracteres encontrados en el conjunto
    for (char c : str) {
        requiredSet.erase(c);
    }

    // Si el conjunto está vacío, entonces la cadena contenía todos los caracteres requeridos
    return requiredSet.empty();
}

int main() {
    string requiredChars = "Timur";
    string str1 = "abc";


    // Verificamos la primera cadena
    if (hasAllCharacters(str1, requiredChars))
        cout << "La cadena \"" << str1 << "\" contiene todos los caracteres requeridos.\n";
    else
        cout << "La cadena \"" << str1 << "\" no contiene todos los caracteres requeridos.\n";


    return 0;
}
