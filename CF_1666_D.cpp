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
    string s, t;
    cin >> s >> t;

    vector<int> cntS(26, 0), cntT(26, 0);
    int lo = 0;
    while (lo < s.length()) {
        cntS[s[lo] - 'A']++;
        lo++;
    }

    lo = 0;
    while (lo < t.length()) {
        cntT[t[lo] - 'A']++;
        lo++;
    }
    string ans = "";
    lo = 0;
    while (lo<s.length()) {
        if (cntS[s[lo] - 'A'] > cntT[s[lo] - 'A']) {
            cntS[s[lo] - 'A']--;
        } else {
            ans += s[lo];
        }
        lo++;
    }
    if (ans == t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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