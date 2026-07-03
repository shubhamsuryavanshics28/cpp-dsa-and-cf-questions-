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
    int n, q;
    cin >> n >> q;
    vector<long long> v(n + 1);
    vector<long long> pref(n + 1, 0);
    long long total = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        total += v[i];
        pref[i] = pref[i - 1] + v[i];
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        long long oldSum = pref[r] - pref[l - 1];
        long long len = r - l + 1;
        long long sum = total - oldSum + len * 1LL * k;

        if (sum % 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return;
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