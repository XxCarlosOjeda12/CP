#include <bits/stdc++.h>

using namespace std;

int main(){
    
  
    int X[4];
    int n = sizeof(X) / sizeof(X[0]); 
    int a,b,c;

    for(int i = 0; i < n; i++){
        cin >> X[i];
    }

    sort(X, X + n);

    for(int i = 0; i < n; i++){
        a = X[3] - X[0];
        b = X[3] - X[1];
        c = X[3] - X[2];
    }

    cout << a <<" " << b <<" "<< c <<endl;

    return 0;
}