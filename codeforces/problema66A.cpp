#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    string input;
    cin >> input;

    try {
        
        long long n = stoll(input);

        if(n >= -128 && n <= 127){
            cout << "byte" << endl;
        } else if(n >= -32768 && n <= 32767){
            cout << "short" << endl;
        } else if(n >= numeric_limits<int>::min() && n <= numeric_limits<int>::max()){
            cout << "int" << endl;
        } else if(n >= numeric_limits<long long>::min() && n <= numeric_limits<long long>::max()){
            cout << "long" << endl;
        } else {
            cout << "BigInteger" << endl;
        }

    } catch (out_of_range&) {
        cout << "BigInteger" << endl;
    } 
}

int main(){
    solve();
    return 0;   
}
