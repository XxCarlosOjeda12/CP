#include <bits/stdc++.h>
using namespace std;

void solve(){

    string s = "   fly me   to   the moon  ";

    int tam = s.length();
    int cont = 0;
    for(int i = tam - 1; i >= 1; i--){
        if(s[i] == ' '){
            continue;
        }
        if(s[i - 1] == ' '){
            break;
        }

        cont++;
    }


    cout << cont << endl;

}

    int lengthOfLastWord(string s) {
        int tam = s.length();
        int cont = 0;
        for(int i = tam - 1; i >= 1; i--){
            if(s[i] == ' '){
                continue;
            }
            if(s[i - 1] == ' '){
                break;
            }

            cont++;
        }

        return cont + 1;

    }


int main(){

    solve();

    return 0;
}