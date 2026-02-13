#include <bits/stdc++.h>
using namespace std;

int slidingWindow(vector<int>arr, int n, int k){

    int sumMaxima = 0, window = 0;

    for(int i = 0; i < k; i++){
        sumMaxima += arr[i];
    }   

    window = sumMaxima;
    int res = 0;
    for(int i = k; i < n; i++){
        window += arr[i] - arr[i-k];
        res = max(sumMaxima, window);
    }

    return res;
}


int main(){
    int n, k;

    cin >> n;
    cin >> k;

    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = slidingWindow(a,n,k); 

    cout << res << endl;

    return 0;
}