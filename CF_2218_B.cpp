#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n1,n2,n3,n4,n5,n6,n7;
        cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7;
        
        vector<int> v;   
        v.push_back(n1);
        v.push_back(n2);
        v.push_back(n3);
        v.push_back(n4);
        v.push_back(n5);
        v.push_back(n6);
        v.push_back(n7);

        sort(v.begin(), v.end());

        int sum = 0;
        for(int i = 0; i < 7; i++){
            sum += v[i];   
        }

        int ans = 2 * v[6] - sum;   

        cout << ans << endl;
    }

    return 0;
}