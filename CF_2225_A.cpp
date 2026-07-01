#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        bool flag = false;
        long long val = 2*x;
        while(val < y){
            if(y % val != 0){
                flag = true;
                break;
            }
            val += x;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}