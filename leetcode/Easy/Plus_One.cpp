#include <bits/stdc++.h>
using namespace std;



// este es mas eficiente
vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }else{
            digits[i] = 0;
        }
        
    }
     
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){

    vector<int> nums = {9,8,7,6,5,4,3,2,1,0};
     
    vector<int> res =  plusOne(nums);

    for(auto x : res){
        cout << x << " ";
    }

 
    return 0;
}