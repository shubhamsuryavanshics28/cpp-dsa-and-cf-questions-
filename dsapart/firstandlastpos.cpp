#include<iostream>
#include<vector>
using namespace std;

int lowerbound(vector<int>& arr1,int target){
    int lo=0;
    int hi=arr1.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr1[mid]>=target){
            ans=mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}

int upperbound(vector<int>& arr1,int target){
    int lo=0;
    int hi=arr1.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr1[mid]>target){
            ans=mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }   
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of the vector: ";
    cin>>n;
    vector<int> res;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res.push_back(x);
    }
    int target;
    cout<<"enter the target value: ";
    cin>>target;
    vector<int> result;
    int lb=lowerbound(res,target);
    if(res[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }
    else{
        int ub = upperbound(res,target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<"\n";

    return 0;
}
