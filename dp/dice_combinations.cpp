#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int helper(int n,vector<int>& dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = 0;
    for(int i=1;i<=6;++i){
        if(n-i>=0){
            dp[n] = (1LL * dp[n] + helper(n-i,dp)) % MOD;
        }
    }
    return dp[n];
}

int main() {
    int n; cin>>n;
    vector<int> dp(1000006,-1);
    int ans = helper(n,dp);

    cout<<ans<<endl;

    return 0;
}