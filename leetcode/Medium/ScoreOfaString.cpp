#include <bits/stdc++.h>
using namespace std;

void solve(){


}


int scoreOfString(string s) {

    int n = s.length();
    int aux1 = 0, aux2 = 0, sum = 0, val = 0;

    for(int i = 1; i <= n - 1; i++){
        aux1 = s[i-1];
        aux2 = s[i];
        val = abs(aux1 - aux2);
        sum += val;
    }

    return sum;
}

int main(){
    
    int res = scoreOfString("zaz");
    cout << res << endl;

    return 0;
}