#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={4,1,-1,2,-1,2,3};
    map<int,int> m;
    for(int i=0;i<nums.size();++i){
        m[nums[i]]++;
    }    
    for(auto itr:m){
        cout<<itr.first<<" "<<itr.second<<"\n";
    }

    return 0;
}
