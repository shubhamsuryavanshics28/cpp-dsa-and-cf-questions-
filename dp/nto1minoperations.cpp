#include <bits/stdc++.h>
using namespace std;

int helper(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;

    if (n%2==0 && n%3!=0) {
        return min(helper(n-1),helper(n/2))+1;
    }
    else if (n%2!=0 && n%3==0){
        return min(helper(n-1),helper(n/3))+1;
    }
    else if (n%2==0 && n%3==0){
        return min({helper(n-1),helper(n/2),helper(n/3)})+1;
    }
    else {
        return helper(n-1)+1;
    }
}

int ftd(int n,vector<int>& dp){
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;

    if(dp[n]!=INT_MAX) return dp[n];
    if (n%2==0 && n%3!=0) {
        return dp[n] = min(ftd(n-1,dp),ftd(n/2,dp))+1;
    }
    else if (n%2!=0 && n%3==0){
        return dp[n] = min(ftd(n-1,dp),ftd(n/3,dp))+1;
    }
    else if (n%2==0 && n%3==0){
        return dp[n] = min({ftd(n-1,dp),ftd(n/2,dp),ftd(n/3,dp)})+1;
    }
    else {
        return dp[n] = ftd(n-1,dp)+1;
    }
}

int fbu(int n,vector<int>& dp){
    dp.clear();
    dp.resize(n+1,INT_MAX);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i=4;i<=n;++i){
        dp[i] = 1+min({dp[i-1], (i%2==0)?dp[i/2]:INT_MAX, (i%3==0)?dp[i/3]:INT_MAX});
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1,INT_MAX);
    //int ans = helper(n,dp);
    int ans = ftd(n,dp);
    int ans2 = fbu(n,dp);
    cout<<ans<<" "<<ans2<<endl;

    return 0;
}