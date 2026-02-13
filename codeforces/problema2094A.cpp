#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin, s);  
    vector<char> res;

    res.push_back(s[0]);  

    for(int i = 1; i < s.length(); i++){
        if(s[i] == ' ' && i + 1 < s.length()){
            res.push_back(s[i+1]);
        }
    }

    for(char c : res){
        cout << c;
    }

    cout << endl;
}

int main(){
    solve();
    return 0;
}
