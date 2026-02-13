#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, cont1 = 0, cont2 = 0;
    string S;
    char anton = 'A';
    char danik = 'D';

    cin >> n;
    cin >> S;

    for(int i = 0; i < n; i++){
        if(S[i] == anton){
            cont1++;
        }
        if(S[i] == danik){
            cont2++;
        }
    }

    if(cont1 > cont2){
        cout <<"Anton" <<"\n";
    }else if(cont1 < cont2){
        cout <<"Danik" <<"\n";
    }else{
        cout <<"Friendship" <<"\n";
    }




    return 0;
}