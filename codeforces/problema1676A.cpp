#include <bits/stdc++.h>
using namespace std;

int sum(int x1, int x2, int x3);

int main(){

    int t, res1, res2, A[5];
    string S;


    cin >> t;
    while(t--){
    cin >> S;

    for(int i = 0; i < 6; i++){
        A[i] = S[i] - '0';
    }

    res1 = sum(A[0],A[1],A[2]);
    res2 = sum(A[3],A[4],A[5]);

    if(res1 == res2){
        cout <<"YES" <<endl;
    }else{
        cout <<"NO" <<endl;
    }


   }
   
    return 0;
}

int sum(int x1, int x2, int x3){
    int res = x1 + x2 +x3;
    return res;
}
