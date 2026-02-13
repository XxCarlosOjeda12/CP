#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
    string s1, s2;
    bool flag = true;
    vector<char>A, B;

    getline(cin, s1);
    getline(cin, s2);

    int n = s1.length(), k = s2.length();

 
    for(int i = 0; i < n; i++){
        if(s1[i] != ' '){
            A.push_back(s1[i]);
        }
    }

    for(int i = 0; i < k; i++){
        if(s2[i] != ' '){
            B.push_back(s2[i]);
        }
    }

 
    for(char x : B){
        bool found = false;  
        for(auto it = A.begin(); it != A.end(); it++){
            if(*it == x){
                A.erase(it);  
                found = true;
                break;  
            }
        }
        if(!found){  
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    solve();
    return 0;
}
