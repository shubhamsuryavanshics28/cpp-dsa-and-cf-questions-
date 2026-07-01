#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(n % k != 0){
            cout << 1 << endl;
            cout << n << endl;
        }
        else{
            if(n < k){
                cout << 1 << endl;
                cout << n << endl;
            }
            else if(n % 2 == 0 && k % 2 != 0){
                cout << 2 << endl;
                cout << 1 << " " << n - 1 << endl;
            }
            else if(n % 2 == 0 && k % 2 == 0){
                cout << 2 << endl;
                cout << n - 1 << " " << 1 << endl;
            }
            else if(n % 2 != 0 && k % 2 == 0){
                cout << 1 << endl;
                cout << n << endl;
            }
            else if(n % 2 != 0 && k % 2 != 0){
                cout<<2<<endl;
                cout<<2<<" "<<n - 2<<endl;
            }
        }
    }

    return 0;
}