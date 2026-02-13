#include <bits/stdc++.h>
using namespace std;

int main(){

int t, n, res;

cin>> t;
while(t--){
    cin>> n;

    if(n%2==0)  
    {
        res = (n/2) -1;
    } 
    if(n%2==1)
    {
        res = n/2;
    }
    if(n==0){
        continue;
    }

    cout << "" <<res <<endl;

}

    return 0;
}