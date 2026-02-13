#include <bits/stdc++.h>
using namespace std;
int lcs(string X, string Y, int m, int n) {
	// Initialize dynamic programming table
	int table[m + 1][n + 1];
	// Compute table values
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			// Base case
			if (i == 0 || j == 0)
				table[i][j] = 0;
			// Last elements are equal
			else if (X[i - 1] == Y[j - 1])
				table[i][j] = table[i - 1][j - 1] + 1;
			// Last elements differ
			else
				table[i][j] = max(table[i - 1][j], table[i][j - 1]);
		}
	}
	return table[m][n];
}
// Let's test
int main() {
  // Initialize variables
  string X = "DAVID";
  string Y = "DANIEL";
  int m = X.size();
  int n = Y.size();
  // Compute and output length of LCS
  cout << "Length of LCS is " << lcs(X, Y, m, n);
  return 0;
}