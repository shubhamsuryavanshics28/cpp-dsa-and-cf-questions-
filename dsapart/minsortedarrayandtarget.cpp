#include<iostream>
#include<vector>
using namespace std;

int findminsortedarray(vector<int> res){
    if(res.size()==1) return res[0];
    int lo=0,hi=res.size()-1;
    if(res[lo]<res[hi]){
        return lo;
    }
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;
        if(res[mid] > res[mid+1]) return mid+1;
        if(res[mid] < res[mid-1]) return mid;
        if(res[mid]>res[lo]){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
        
    }
    return -1;
}
int lower(vector<int> res,int target,int small){
    int lo = 0;
    int hi = small-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(res[mid]==target) return mid;
        else if(res[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return -1;
}

int upper(vector<int> res,int target,int small){
    int lo = small;
    int hi = res.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(res[mid]==target) return mid;
        else if(res[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
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
    int small=findminsortedarray(res);
    
    int result1=lower(res,target,small);
    int result2 = upper(res,target,small);
    //cout<<"index of the smallest element: "<<findminsortedarray(res)<<"\n";
    if(result1!=-1){
        cout<<"index of the target: "<<result1<<"\n";
    }
    else if(result2!=-1){
        cout<<"index of the target: "<<result2<<"\n";
    }
    else{
        return -1;
    }
    return 0;
}
