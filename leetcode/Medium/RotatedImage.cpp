#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {

    int n = matrix.size();

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

}   

int main(){

    vector<vector<int>> grid = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };  

    int n = grid.size();
    rotate(grid);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
