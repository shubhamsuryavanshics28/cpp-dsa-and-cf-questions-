#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
    int sum = 0;
    for(int i=0;i<triangle.size();++i){
        vector<int> v = triangle[i];
        int a = *min_element(v.begin(),v.end());
        sum += a;
    }
    cout<<sum<<endl;

    return 0;
}