#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, w, n, s = 0;

    cin >> k >> w >> n;

    for(int i = 1; i <= n; i++){
        s += i*k;
    }

    int res = s - w;
    if(res <= 0){
        cout << "0" <<endl;
    }else{
        cout << res <<endl;
    }
    


    return 0;
}