#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,3,5,4,2,6};
    int p=0;
    int q=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]>nums[i+1]){
            p=nums[i];
            }
        else if(nums[i]>nums[i-1] and nums[i]>nums[i+1]){
            q=nums[i];
        }
    }
    cout<<p<<" "<<q<<"\n";

    return 0;
}