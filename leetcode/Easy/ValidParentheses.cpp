#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(char c : s){

        if(c == '(' || c == '[' || c == '{'){
            st.push(c);
        }

        if(c == ')' || c == ']' || c == '}'){

            if(st.empty()) return false;

            char tp = st.top();

            if( (c == ')' && tp != '(' )|| (c == ']' && tp != '[' )|| ( c == '}' && tp != '{')){
                return false;
            }

            st.pop();

        }

    }

    if(st.empty()) return true;

    return false;
}

int main() {
    vector<string> testCases = {"[{()}]", "[()()]{}", "(]", "([{]})"};
    for (const string& s : testCases) {
        cout << "Input: " << s << " -> Output: " << (isValid(s) ? "true" : "false") << endl;
    }
    return 0;
}