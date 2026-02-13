#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> permute(vector<int>& nums) {
    vector<int> aux = nums;
    vector<vector<int>> res;

    sort(aux.begin(), aux.end());   

    do {
        res.push_back(aux);  
    } while (next_permutation(aux.begin(), aux.end()));

    return res;
}

int main(){
    vector<int> input = {1,2,3,4,5,6};
    vector<vector<int>> res = permute(input);

    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
