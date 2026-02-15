#include<iostream>
#include<vector>
using namespace std;

int peakelement(vector<int>& res){
    int lo=1,hi=res.size()-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(res[mid] > res[mid-1]){
            ans = max(ans,mid);
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }return ans;
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

    cout<<"index of the peak element: "<<peakelement(res)<<"\n";

    return 0;
}
