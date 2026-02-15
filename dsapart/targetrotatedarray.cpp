#include<iostream>
#include<vector>
using namespace std;

int binarysearchrotated(vector<int> res,int target){
    int lo=0,hi=res.size()-1;
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;
        if(res[mid] == target) return mid;
        if(res[mid]>res[lo]){
            if(target >= res[lo] && target <= res[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else{
            if(target >= res[mid] && target <= res[hi]){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
    }
    return -1;
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
    cout<<"index of the target value: "<<binarysearchrotated(res,target)<<"\n";    

    return 0;
}
