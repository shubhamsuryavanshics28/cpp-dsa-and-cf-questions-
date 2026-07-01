#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x; cin>>n>>k>>x;

        vector<int> v;
        unordered_map<int, int> m;
        if (x != 1) {
            m[1] = n;
        }
        else {
            if (k == 1) {
                cout << "NO" << endl;
                continue;
            }
            if (n % 2 == 0) {
                m[2] = n / 2;
            }
            else {
                if (k < 3) {
                    cout << "NO" << endl;
                    continue;
                }
                m[3] = 1;
                m[2] = (n - 3) / 2;
            }
        }
        for (auto itr : m) {
            int val = itr.second;
            while (val--) {
                v.push_back(itr.first);
            }
        }
        cout << "YES" << endl;
        cout << v.size() << endl;
        for (int ele : v) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}