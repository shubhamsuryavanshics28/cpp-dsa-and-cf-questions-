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

int solve()
{
    int n,x; cin>>n>>x;
    vector<int> v(n); input(v,n);
    
    int diff = abs(0-v[0]);
    for (int i = 0; i < n; i++)
    {
        if(i==n-1) diff = (max(diff,2*(abs(v[i]-x))));
        else diff = max(diff,abs(v[i]-v[i+1]));
    }
    return diff;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}