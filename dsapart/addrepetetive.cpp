#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> res(n);

    for(int i=0;i<res.size();++i){
        cout<<"enter the element - "<<"\n";
        cin>>res[i];
    }
    map<int,int> m;

    for(int i=0;i<res.size();++i){
        m[res[i]]++;
    }
    int sum=0;

    for(auto ele:m){
        if(ele.second>1){
            sum+=ele.first;
        }
    }
    cout<<"result - "<<sum<<"\n"; 

    return 0;
}
