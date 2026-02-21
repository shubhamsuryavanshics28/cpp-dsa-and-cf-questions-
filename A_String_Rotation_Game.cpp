#include <bits/stdc++.h>
using namespace std;

// void rotate(string s2){
//     int len = s2.length();
//     char a = s2[len-1];
//     for(int i=0;i<len;++i){
//         s2[i+1]=s2[i];
//     }
//     s2[0]=a;
// }

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        string s2 = s;
        int maxcount = 1;

        do{
            int count = 1;
            for(int i = 1; i < n; i++){
                if(s2[i] != s2[i-1])
                    count++;
            }
            maxcount = max(maxcount, count);

            rotate(s2.rbegin(), s2.rbegin()+1, s2.rend());

        }while(s2 != s);

        cout << maxcount << endl;
    }

    return 0;
}