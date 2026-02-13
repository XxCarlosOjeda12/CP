#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> marca(k, 0);
  for (int i = 0; i < k; i++) {
    int b, c;
    cin >> b >> c;
    marca[b - 1] += c;
  }
  sort(marca.rbegin(), marca.rend());
  long long ans = 0;
  for (int i = 0; i < min(n, k); i++) {
    ans += marca[i];
  }
  cout << ans << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}