#include <bits/stdc++.h>
using namespace std;
 
void caso3(){
    long long a, b, c, d, e, f;
        cin >> a >> b >> c;
        cin >> d >> e ;
        cin >> f;
        long long sumA = ((a + b + c) - (d + e));
        long long sumB = ((d + e) - (f));
        cout << sumA <<"\n";
        cout << sumB <<"\n";
}

void solve(long long n){

long long  sumA = 0, sumB = 0, sumC = 0;
    vector<long long>A(n), B(n-1), C(n-2);
 
    for(long long i = 0; i < n; i++){
        cin >> A[i];
        sumA += A[i];
    }
    
    for(long long i = 0; i < n - 1; i++){
        cin >> B[i];
        sumB += B[i];
    }
 
    for(long long i = 0; i < n - 2; i++){
        cin >> C[i];
        sumC += C[i];
    }
    cout << sumA - sumB <<"\n";
    cout << sumB - sumC <<"\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;

    if(n < 3) return 1;
    if(n == 3) caso3();
    if(n > 3) solve(n);
 
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    vector<long long>A(n), B(n-1), C(n-3);
 
    for(long long i = 0; i < n; i++){
        cin >> A[i];
        sum1 += A[i];
    }
    
    for(long long i = 0; i < n - 1; i++){
        cin >> B[i];
        sum2 += B[i];
    }
 
    for(long long i = 0; i < n - 2; i++){
        cin >> C[i];
        sum3 += C[i];
    }
    cout << sum1 - sum2 <<"\n";
    cout << sum2 - sum3 <<"\n";
 
    return 0;
}

*/
 