#include <bits/stdc++.h>
using namespace std;

int main(){

// A[i] <  average /2

//contador de infelices > n/2  !!!!
int n, sum = 0, cont = 0;
cin >> n;
vector<int>A(n);
for(int i = 0; i < n; i++){
    cin >> A[i];
}
sort(A.begin(), A.end());
for(int i = 0; i < n; i++){
    sum += A[i];
}

float average =  (float)(sum+15)/(float)(2*n);
int max = A[n-1];
cout << average <<endl;
for(int i = 0; i < n; i++){
    if(A[i] < average){
        cont++;
    }
}

cout << cont << endl;
    return 0;
}