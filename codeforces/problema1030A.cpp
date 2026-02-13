#include <bits/stdc++.h>
using namespace std;

int main(){

int t, sum = 0;



cin >> t;
int A[t];

for(int i = 0; i < t; i++)
{
    cin >> A[i];
    sum += A[i];
}

if(sum != 0){
    cout <<"HARD"<<endl;
}else{
    cout <<"EASY"<<endl;
}

}