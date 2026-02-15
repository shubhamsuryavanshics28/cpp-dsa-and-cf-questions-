#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-1,4,-1};
    int n=nums.size();
    vector<int> result;
    int lo=0;
    int hi=lo;
    while(lo<n){
        if(nums[lo]>0){
            hi += nums[lo];
            int a = hi%n;
            result.push_back(nums[a]);
            lo++;
            hi = lo;
        }else if(nums[lo]<0){
            hi += abs(nums[lo]);
            int a = hi%n;
            result.push_back(nums[hi]);
            lo++;
            hi = lo;
        }else{
            result.push_back(nums[lo]);
            lo++;
            hi=lo;
        }
    }
    for(int i=0;i<result.size();++i){
        cout<<result[i]<<" ";
    }
    return 0;
}