
#include <bits/stdc++.h>
using namespace std;

long long g(vector<int>& colors, int i, int j) {
    long long result = 0;

    for (int m = i; m <= j; m++) {
        result = (result % 100 + colors[m] % 100) % 100;
    }

    return result;
}

long long helper(vector<int>& colors, int i, int j,vector<vector<long long>>& dp) {
    if (i == j) {
        return dp[i][j] = 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    long long result = LLONG_MAX;
    for (int k = i; k < j; k++) {
        result = min(result,helper(colors, i, k, dp) + helper(colors, k + 1, j, dp) + g(colors, i, k) * g(colors, k + 1, j));
    }
    return dp[i][j] = result;
}

long long fbu(vector<int>& colors, vector<vector<long long>>& dp) {
    int n = colors.size();
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len <= n; i++) {
            int j = i + len - 1;
            dp[i][j] = LLONG_MAX;

            for (int k = i; k < j; k++) {
                long long cost = dp[i][k]
                               + dp[k + 1][j]
                               + g(colors, i, k) * g(colors, k + 1, j);

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][n-1];
}

int main() {
    int n;

    while (cin >> n) {
        vector<int> colors(n);

        for (int i = 0; i < n; i++) {
            cin >> colors[i];
        }

        // Top-Down DP
        vector<vector<long long>> dp1(n, vector<long long>(n, -1));
        // Bottom-Up DP
        vector<vector<long long>> dp2(n, vector<long long>(n, 0));

        cout << "Top-Down: " << helper(colors, 0, n - 1, dp1) << endl;
        cout << "Bottom-Up: " << fbu(colors, dp2) << endl;
    }

    return 0;
}
