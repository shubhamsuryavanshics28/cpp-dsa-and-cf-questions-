#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n+1);
        for(int i=1;i<=n;++i){
            cin >> v[i];
        }
        vector<int> a = v;
        sort(a.begin()+1, a.end());
        bool changed = true;
        while(changed){
            changed = false;
            for(int i=1;i<=n/2;++i){
                if(v[i] > v[2*i]){
                    swap(v[i], v[2*i]);
                    changed = true;
                }
            }
        }

        bool found = true;
        for(int i=1;i<=n;++i){
            if(a[i] != v[i]){
                found = false;
                break;
            }
        }

        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
