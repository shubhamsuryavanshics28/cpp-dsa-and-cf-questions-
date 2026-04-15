#include <bits/stdc++.h>
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
        unordered_map<int,int> m;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        int sum=0;
        bool flag = false;
        for(auto itr:m){
            if(itr.second>1){
                for(int i = 0; i < n; i++){
                    if(v[i] <= sum){
                        flag = true;
                        break;
                    }
                    sum += v[i];
                }
            }
        }
        if(flag==false){
            for(int i=0;i<n;++i){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<< -1 <<endl;
        }

    }

    return 0;
}