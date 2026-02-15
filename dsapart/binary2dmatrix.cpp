#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int> > res,int target){
    int n = res.size();
    int m = res[0].size();
    int lo = 0,hi = n*m - 1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        int x = mid/m;
        int y = mid%m;
        if(res[x][y]==target){
            return true;
        }
        else if(res[x][y]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return false;
}
int main(){
    vector<vector<int> > res = {{1,3,5,7},{10,11,16,20},{23,30,34,}};
    int target = 23;
    cout<<searchmatrix(res,target);

    return 0;
}
