#include <bits/stdc++.h>
using namespace std;

void solve(){


}

int findClosest(int x, int y, int z) {

    int disX = abs(z-x), disY = abs(z-y);

    if(disX < disY){
        return 1;
    }else if(disY < disX){
        return 2;
    }else{
        return 0;
    }

}

int main(){

    return 0;
}