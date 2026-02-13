#include <bits/stdc++.h>
using namespace std;

 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int sum , k = 15;
    int a, b, c, d;
    
    cin >> a >> b >> c >> d; 
    sum = a + b + c + d;
    cout <<(k - sum) <<"\n";

    return 0;
}