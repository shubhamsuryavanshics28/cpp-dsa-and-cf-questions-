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
        // sort(v.begin(),v.end());
        bool found = false;

        for(int x:v){
            if(x==67){
                found = true;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}