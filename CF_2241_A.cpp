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
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << "YES"<<endl;
    else if (y == 1)
        cout << "NO"<<endl;
    else if (x % y == 0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;

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