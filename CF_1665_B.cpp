#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

#define returnYES {std::cout << "YES" << std::endl; return;}
#define returnNO  {std::cout << "NO"  << std::endl; return;}
template <typename T>
void print(const vector<T> &v)
{
    for (auto &x : v)
        cout << x << " ";
    cout << "\n";
}

template <typename T>
void input(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    input(v, n);

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int result = 0;
    sort(v.begin(), v.end());

    int val = 1;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            val = max(val, count);
            count = 1;
        }
    }
    val = max(val, count);

    if (val == n) {
        cout << 0 << endl;
        return;
    }
    else {
        long long c = val;
        while (c < n) {
            if (2 * c <= n) {
                result += c + 1;
                c *= 2;
            } else {
                result += (n - c) + 1;
                c = n;
            }
        }
        cout << result << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}