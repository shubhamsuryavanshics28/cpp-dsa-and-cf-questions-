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
    int n, k;cin>>n>>k;
    string s;cin>>s;
    bool flag = true;
    for (int i = 0; i < k; i++) {
        int count = 0;
        for (int j = i; j < n; j += k) {
            if (s[j] == '1') count++;
        }
        if (count&1) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
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