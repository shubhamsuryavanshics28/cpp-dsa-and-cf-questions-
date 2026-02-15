#include<iostream>
#include<vector>
using namespace std;

int peakelement(vector<int>& res){
    int n = res.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid==0){
            if(res[mid] > res[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(res[mid] > res[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(res[mid] > res[mid+1] && res[mid] > res[mid-1]){
                return mid;
            }
            else if(res[mid] > res[mid-1]){
                lo = mid+1;
            }
            else{
                hi = mid-1;
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
    
    cout<<"index found of peak element: "<<peakelement(res)<<"\n";

    return 0;
}
