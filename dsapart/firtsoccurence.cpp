#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int>& arr1,int target){
    int lo=0;
    int hi=arr1.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr1[mid]==target) {
            ans = mid;
            hi = mid-1;
        }
        else if(arr1[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of the vector: ";
    cin>>n;
    vector<int> arr1;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    int target;
    cout<<"enter the target value: ";
    cin>>target;
    cout<<firstoccurence(arr1,target)<<" ";
    
    return 0;
}
