#include <bits/stdc++.h>
using namespace std;

vector<int> getdigit(int n){
    vector<int> result;
    while(n>0){
        if(n%10!=0){
            result.push_back(n%10);
        }
        n /= 10;
    }
    return result;
}

int fbu(int num,vector<int> dp){
    dp[0]=0;
    for(int i=1;i<=9;++i) dp[i] = 1;
    for(int n=10;n<num;++n){
        vector<int> d = getdigit(n);
        int ans = INT_MAX;
        for(int i=0;i<d.size();++i){
            ans = min(ans,dp[n-d[i]]);
        }
        dp[n] = 1+dp[n];
    }
    return dp[num];
}

int helper(int n,vector<int>& dp){
    if(n==0) return 0;
    if(n<10) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> arr = getdigit(n);
    int ans = INT_MAX;
    for(int i=0;i<arr.size();++i){
        ans = min(ans,helper(n-arr[i],dp));
    }
    return dp[n] = 1+ans;
}

int main() {
    int n; cin>>n;
    vector<int> dp(1000005,-1);
    cout<<helper(n,dp)<<endl;

    return 0;
}