#include <bits/stdc++.h>
using namespace std;

int helper(int x,vector<int>& v,vector<int>& dp){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    int ans = INT_MAX;
    for(int i=0;i<v.size();++i){
        if(x-v[i]>=0){
            ans = min(ans,helper(x-v[i],v,dp));
        }
    }
    if(ans==INT_MAX) return dp[x]=INT_MAX;
    return dp[x] = 1+ans;
}

int main() {
    int n,x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    vector<int> dp(x+1,-2);
    int result = helper(x,v,dp);
    if(result==INT_MAX) cout<<-1<<endl;
    else cout<<result<<endl;

    return 0;
}