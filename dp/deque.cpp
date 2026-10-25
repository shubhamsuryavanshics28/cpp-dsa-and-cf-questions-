#include <bits/stdc++.h>
using namespace std;

long long dp[3005][3005];
long long arr[3005];

long long f(int i,int j){
    if(i==j) return arr[i];
    if(dp[i][j]!=-1) return dp[i][j];
    return max(arr[i]-f(i+1,j),arr[j]-f(i,j-1));
}

int fbu(int n){
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++){
        dp[i][i] = arr[i];
    }

    for(int len = 2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j = i+len-1;
            dp[i][j] = max(arr[i]-f(i+1,j),arr[j]-f(i,j-1));
        }
    }
    return dp[0][n-1];
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // memset(dp,-1,sizeof dp);
    // cout<<f(0,n-1)<<endl;
    cout<<fbu(n)<<endl;
    
    return 0;
}