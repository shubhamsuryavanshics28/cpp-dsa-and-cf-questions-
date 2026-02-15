#include<iostream>
#include<vector>
using namespace std;
int sqrt(long n){
    long lo = 1,hi = n;
    long ans = -1;
    while(lo<=hi){
        long mid=lo + (hi-lo)/2;
        if(mid*mid <= n){
            ans=mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    long n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<sqrt(n)<<" ";    

    return 0;
}
