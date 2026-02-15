#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,1,2,3,3,4,4,8,8};
    int lo=0;
    int hi=nums.size()-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            cout<<nums[mid]<<"\n";
        }
        else if(nums[mid]==nums[mid-1] or nums[mid]==nums[mid+1]){
            lo = mid+1;
        }
    }
    int lo1=0;
    int hi1=nums.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1]){
            cout<<nums[mid]<<"\n";
        }
        else if(nums[mid]==nums[mid-1] or nums[mid]==nums[mid+1]){
            hi = mid-1;
        }
    }    

    return 0;
}
