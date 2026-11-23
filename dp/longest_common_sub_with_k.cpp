
#include <bits/stdc++.h>
using namespace std;

long long dp[2008][2008][8];

long long helper(const vector<long long>& v1, const vector<long long>& v2, int i, int j, int k) {
    if(i == v1.size() || j == v2.size()){
        return 0;
    }

    if(dp[i][j][k] != -1) return dp[i][j][k];

    long long res = 0;

    if(v1[i] == v2[j]){
        res = 1 + helper(v1, v2, i+1, j+1, k);
    }else{
        if(k > 0){
            res = 1 + helper(v1, v2, i+1, j+1, k-1);
        }

        res = max(res, helper(v1, v2, i+1, j, k));
        res = max(res, helper(v1, v2, i, j+1, k));
    }

    return dp[i][j][k] = res;
}

int main() {
    memset(dp, -1, sizeof(dp));

    int k = 1;

    vector<long long> v1 = {1,2,3,4,5};
    vector<long long> v2 = {1,2,6,4,7};

    long long ans = helper(v1, v2, 0, 0, k);

    cout << ans << endl;

    return 0;
}
