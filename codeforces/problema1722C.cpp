#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    int t;  
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

void solve(){
            int n;  
        cin >> n;

        vector<string> p1(n), p2(n), p3(n);
        unordered_map<string, int> word_count;

       
        for (int i = 0; i < n; ++i) {
            cin >> p1[i];
            word_count[p1[i]]++;
        }
        for (int i = 0; i < n; ++i) {
            cin >> p2[i];
            word_count[p2[i]]++;
        }
        for (int i = 0; i < n; ++i) {
            cin >> p3[i];
            word_count[p3[i]]++;
        }

   
        int points1 = 0, points2 = 0, points3 = 0;

        for ( auto& word : p1) {
            if (word_count[word] == 1) {
                points1 += 3;  
            } else if (word_count[word] == 2) {
                points1 += 1; 
            }
        }

        for ( auto& word : p2) {
            if (word_count[word] == 1) {
                points2 += 3;
            } else if (word_count[word] == 2) {
                points2 += 1;
            }
        }

        for ( auto& word : p3) {
            if (word_count[word] == 1) {
                points3 += 3;
            } else if (word_count[word] == 2) {
                points3 += 1;
            }
        }

     
        cout << points1 << " " << points2 << " " << points3 << endl;
}