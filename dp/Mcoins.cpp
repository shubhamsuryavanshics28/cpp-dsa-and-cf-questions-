#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,k,l; cin>>k>>l>>m;

    vector<bool> dp(1000005,0);
    dp[1] = 1;

    for(int i=2;i<=1000000;++i){
        if(dp[i-1]==0 || ((i-k>=0) ? dp[i-k]==0 : 0) || ((i-l>=0) ? dp[i-l]==0 : 0)) dp[i] = 1;
    }

    for(int i=0;i<m;++i){
        int n; cin>>n;
        if(dp[n]==1){
            cout<<"A";
        }else{
            cout<<"B";
        }
    }

    return 0;
}