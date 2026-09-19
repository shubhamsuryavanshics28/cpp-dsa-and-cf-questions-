#include <bits/stdc++.h>
using namespace std;

int helper(int i, int j,vector<int>& arr,vector<vector<int>>& dp){
    if(i==j || i+1==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    int ans = INT_MAX;
    for(int k=i+1;k<j;k++){
        ans = min(ans,helper(i,k,arr,dp)+helper(k,j,arr,dp)+arr[i]*arr[k]*arr[j]);
    }
    return dp[i][j] = ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<int>> dp(1005,vector<int>(1005,-1));
    for(int i=0;i<n;++i) cin>>v[i];

    cout<<helper(0,n-1,v,dp)<<endl;

    return 0;
}