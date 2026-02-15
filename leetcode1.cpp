#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
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

void f()
{
    int n;
    cin>>n;
    vector<int>v;
    input(v,n);
    int x;
    cin>>x;

    auto mini = min_element(v.begin(),v.end());
    auto maxi = max_element(v.begin(),v.end());

    if(x>= *mini && x<= *maxi){
        returnYES
    }
    returnNO;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}