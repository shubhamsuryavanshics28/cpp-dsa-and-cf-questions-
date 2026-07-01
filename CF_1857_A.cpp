#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }

        int odd = 0;

        for(int i=0;i<n;++i){
            if(v[i]%2!=0) odd++;
        }

        string ans = "YES";

        if(odd%2!=0){
            ans = "NO";
        }

        cout<<ans<<endl;
    }

    return 0;
}