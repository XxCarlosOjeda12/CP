#include <bits/stdc++.h>
using namespace std;

//la bruta
/*
vector<int> twoSum(vector<int>& nums, int target) {
    int posi= 0, posj = 0;
    int n = nums.size();
    vector<int> res(2);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int sum = nums[i] + nums[j];
            if(sum == target){
                posi = i;
                posj = j;
                break;
            }

        }

    }

    res[0] = posi;
    res[1] = posj;

    return res;
}
*/


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int ,int> mp;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int x = target - nums[i];

        if(mp.find(x) != mp.end()){
            return{mp[x], i};
        }else{
            mp[nums[i]] = i;
        }

    }

    return {};
}

int main(){ 

    vector<int> res = {2,7,11,15};
    int k = 9;
    vector<int> aux = twoSum(res, k);

    cout << aux[0] << " " << aux[1] << endl;

    return 0;
}