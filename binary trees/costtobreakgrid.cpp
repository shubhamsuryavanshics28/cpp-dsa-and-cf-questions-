#include<bits/stdc++.h>
using namespace std;

long long mincosttobreakgrid(vector<long long> v1, vector<long long> v2, int m, int n){
    sort(v1.begin(), v1.end(), greater<>());
    sort(v2.begin(), v2.end(), greater<>());
    int i = 0;
    int j = 0;
    long long totalcost = 0;
    long long vertical = 1;
    long long horizontal = 1;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            totalcost += v1[i]*vertical;
            horizontal++;
            i++;
        }
        else{
            totalcost += v2[j]*horizontal;
            vertical++;
            j++;
        }
    }
    while(i<v1.size()){
        totalcost += v1[i]*vertical;
        horizontal++;
        i++;
    }
    while(j<v2.size()){
        totalcost += v2[j]*horizontal;
        vertical++;
        j++;
    }
    return totalcost;
}

int main(){
    int n = 3;
    int m = 4;
    vector<long long> arr1 = {2,4,1};
    vector<long long> arr2 = {5,2,1};

    cout<<mincosttobreakgrid(arr1,arr2,m,n)<<endl;
    return 0;
}