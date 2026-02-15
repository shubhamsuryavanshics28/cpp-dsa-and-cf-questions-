#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,1,1};
    int k=2;
    int sum=0;
    int count=0;
    int lo=0;
    int hi = lo+1;
    while(lo<nums.size()){
        if(hi>=nums.size()){
            lo++;
            hi = lo+1;
            continue;
        }
        sum = 0;
        for(int i=lo;i<=hi;i++){
            sum += nums[i]; 
        }
        if(sum==k){
            count++;
        }else{
            hi++;
        }
    }
    cout<<count<<"\n";


    return 0;
}
