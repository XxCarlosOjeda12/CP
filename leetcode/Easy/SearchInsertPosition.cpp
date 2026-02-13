#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target){
        int izq = 0;
        int der = nums.size() - 1;

        while(izq <= der){
            int mitad = (izq + der)/2;
            if(nums[mitad] == target){
                return mitad;
            } 
            
            if(nums[mitad] < target){
                izq =  mitad + 1;
            }
            
            if(nums[mitad] > target){
                der =  mitad - 1;
            }

        }

    return izq;
}

int main(){

    vector<int> A = {1,4,5,6,7};

    cout << searchInsert(A, 2);

    return 0;
}