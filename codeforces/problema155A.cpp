#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, cont = 0;

    cin >> n;
    int A[n];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int max = A[0];
    int min = A[0];

    for(int i = 0; i < n; i++){
        if(A[i] < min){
            min = A[i];
            cont++;
        }
        if(A[i] > max){
            max = A[i];
            cont++;
        }
    }

    cout <<"" <<cont <<endl;


    return 0;
}