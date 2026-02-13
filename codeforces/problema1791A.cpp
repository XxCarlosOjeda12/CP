#include <bits/stdc++.h>
using namespace std;

int main(){

    char c;
    int t;

    cin >> t;
    while(t--){
        cin >> c;
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's')
        {
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }

    }

    return 0;
}