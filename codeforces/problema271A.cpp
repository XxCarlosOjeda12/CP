#include <bits/stdc++.h>
using namespace std;

bool seRepite(int num);

int main() {
    int num;
    cin >> num;

    num++;  
    while (seRepite(num)) {
        num++;
    }

    cout << num << endl;   
    return 0;
}

bool seRepite(int num) {
    string convertir = to_string(num);
    sort(convertir.begin(), convertir.end());
    for (int i = 0; i < 3; i++) {   
        if (convertir[i] == convertir[i + 1]) {
            return true;
        }
    }
    return false;
}
