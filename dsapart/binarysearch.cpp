#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& arr1,int target){
    int lo=0;
    int hi=arr1.size()-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr1[mid]==target) return mid;
        else if(arr1[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int> arr1;    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    int target;
    cout<<"enter the target value: ";
    cin>>target;

    cout<<binarysearch(arr1,target)<<"\n";

    return 0;
}
