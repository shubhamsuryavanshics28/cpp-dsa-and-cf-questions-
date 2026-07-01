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
    int n; cin>>n;
    string s;
    cin >> s;
    int a = s.length();
    if(a == 1){
        cout << 1 << endl;
        return;
    }
    unordered_map<char,int> m;
    for(char c : s){
        m[c]++;
    }
    if(m.size() == 1){
        cout << 1 << endl;
        return;
    }
    int count = 0;
    int lo = 0;
    int hi = 1;
    while(hi < n){
        if(s[lo] != s[hi]) count++;
        lo++;
        hi++;
    }
    if(count == 1) cout << 2 << endl;
    else cout << 1 << endl;
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