#include <bits/stdc++.h>
using namespace std;

int main(){

    int A[5], B[4];
    int acum1 = 0, acum2 = 0, res;

    for(int i = 0; i < 5; i++){
        cin >> A[i];
    }

    for(int i = 0; i < 4; i++){
        cin >> B[i];
    }

    for(int i = 0; i < 5; i++){
        acum1+= A[i];
    }

    for(int i = 0; i < 4; i++){
        acum2+= B[i];
    }

    res = acum1 - acum2;
    cout <<"" <<res <<endl;


    return 0;
}