#include <bits/stdc++.h>
using namespace std;

long long g(vector<int>& colors,int i,int j){
    long long result = 0;
    for(int m=i;m<=j;m++){
        result = (result%100 + colors[m]%100)%100;
    }
    return result;
}

long long helper(vector<int>& colors,int i,int j,vector<vector<int>>& dp){
    if(i==j) return dp[i][j]=0;
    if(dp[i][j]!=-1) return dp[i][j];

    long long result = INT_MAX;
    for(int k=i;k<j;k++){
        result = min(result, helper(colors,i,k,dp) + helper(colors,k+1,j,dp) + g(colors,i,k)*g(colors,k+1,j));
    }

    return dp[i][j] = result;
}

int main(){
    int n;

    while(cin>>n){
        vector<int> colors(n);

        for(int i=0;i<n;i++){
            cin>>colors[i];
        }

        vector<vector<int>> dp(n,vector<int>(n,-1));

        cout<<helper(colors,0,n-1,dp)<<endl;
    }

    return 0;
}