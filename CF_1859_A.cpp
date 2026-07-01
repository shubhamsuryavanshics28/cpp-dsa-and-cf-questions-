#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) cin >> v[i];

        sort(v.begin(), v.end());
        vector<int> v1, v2;
        for (int i = 0; i < n; ++i) {
            if (v[i] == v[0]) {
                v1.push_back(v[i]);
            } else {
                v2.push_back(v[i]);
            }
        }
        if (v2.empty()) {
            cout << -1 << endl;
            continue;
        }

        cout << v1.size() << " " << v2.size() << endl;
        for (int i = 0; i < v1.size(); ++i) {
            cout << v1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < v2.size(); ++i) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}