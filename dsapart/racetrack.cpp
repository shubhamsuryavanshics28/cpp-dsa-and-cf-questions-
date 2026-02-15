#include<iostream>
#include<vector>
using namespace std;

bool canpalcestudent(vector<int>& res,int stu,int mid){
    int studentreq = 1;
    int lastpos = res[0];
    for(int i=0;i<res.size();i++){
        if(res[i]-lastpos >= mid ){
            studentreq++;
            lastpos = res[i];
            if(studentreq == stu){
                return true;
            }
        }
    }
    return false;
}
int race(vector<int>& res,int stu){
    int n=res.size();
    int lo=1;
    int hi = res[n-1] - res[0];
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(canpalcestudent(res,stu,mid)){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    int n=5;
    cout<<"enter the numbr of track: ";
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

    cout<<race(res,stu)<<"\n";

    return 0;
}
