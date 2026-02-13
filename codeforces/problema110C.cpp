#include <iostream>
#include <algorithm>
using namespace std;

string findMinLuckyNumberWithSum(int n) {
 
    int best_a = -1, best_b = -1;

    for (int b = 0; b <= n / 7; ++b) {
        int remaining = n - b * 7;
 
        if (remaining % 4 == 0) {
            int a = remaining / 4;
            if (best_a == -1 || a + b < best_a + best_b || (a + b == best_a + best_b && b < best_b)) {
                best_a = a;
                best_b = b;
            }
        }
    }
    
 
    if (best_a == -1) {
        return "-1";
    }
    
    string result(best_a, '4');
    result.append(best_b, '7');
    return result;
}

int main() {
    int n;
    cin >> n;
    
    string result = findMinLuckyNumberWithSum(n);
    cout << result << endl;
    
    return 0;
}
