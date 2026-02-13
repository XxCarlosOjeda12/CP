#include <bits/stdc++.h>
using namespace std;

int main(){

int bandera = 0;
int tamreal = 0;
string S;
cin >> S;
int n = S.size();

sort(S.begin(), S.end());
for(int i = 0; i < n; i++)
{
    if(S[i] == S[i+1])
    {
        bandera++;
    }
}

tamreal = n - bandera;

if(tamreal%2==1)
{
    cout <<"IGNORE HIM!" <<endl;
}else{
    cout <<"CHAT WITH HER!" <<endl;
}

    return 0;
}