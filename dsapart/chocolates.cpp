#include<iostream>
#include<vector>
using namespace std;

bool candistchoco(vector<int>& res,int mid,int stu){
    int n = res.size();
    int studentreq = 1;
    int currsum = 0;
    for(int i=0;i<n;i++){
        if(res[i] > mid){
            return false;
        }
        if(currsum + res[i] > mid){
            studentreq++;
            currsum = res[i];
            if(studentreq > stu) return false;
        }else{
            currsum += res[i];
        }
    }
    return true;
}

int distchoco(vector<int>& res,int stu){
    int n=res.size();
    int lo = res[0];
    int hi = 0;
    for(int i=0;i<res.size();i++){
        hi += res[i];
    }
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(candistchoco(res,mid,stu)){
            ans = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return ans;
}

int main(){
    int n=4;
    cout<<"enter teh number of boxes: ";
    cin>>n;
    vector<int> res;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res.push_back(x);
    }
    int stu;
    cout<<"enter the number of student: ";
    cin>>stu;

    cout<<distchoco(res,stu)<<"\n";

    return 0;
}
