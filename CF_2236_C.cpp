#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, x;
        cin >> a >> b >> x;

        if(x == 1){
            cout << abs(a - b) << endl;
            continue;
        }
        int count = 0;
        while(a != b){
            int n = min(a, b);
            if(n == a){
                if(abs((b / x) - a) < abs((a + 1) - b)){
                    b = b / x;
                }else{
                    a = a + 1;
                }
            }
            else{
                if(abs((a / x) - b) < abs((b + 1) - a)){
                    a = a / x;
                }else{
                    b = b + 1;
                }
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}