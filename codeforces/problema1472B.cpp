#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, sum = 0;
    cin >> n;
    vector<int>A(n);
 
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }


    for(int i = 0; i < n; i++){
        sum += A[i];
    }
 
 
}

int modulo(int x, int y){
    int res = x%y;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    int x,y;
    while(t--){
        
    int n, sum = 0;
    cin >> n;
    vector<int>A(n);
 
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }


    for(int i = 0; i < n; i++){
        sum += A[i];
    }

        cout << modulo(sum,n) <<endl;
    }
    




    return 0;
}