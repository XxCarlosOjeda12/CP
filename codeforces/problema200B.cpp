#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, sum = 0;
    cin >> n;
    int p[n];

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    double res =(double)sum/(double)n;

    cout << res <<endl;

    return 0;
}