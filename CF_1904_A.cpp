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
    int a,b,xk,yk,xq,yq; cin>>a>>b>>xk>>yk>>xq>>yq;

    set<pair<long long,long long> > s1;
    set<pair<long long,long long> > s2;

    s1.insert({xk+a,yk+b});
    s1.insert({xk-a,yk+b});
    s1.insert({xk+a,yk-b});
    s1.insert({xk-a,yk-b});
    s1.insert({xk+b,yk+a});
    s1.insert({xk+b,yk-a});
    s1.insert({xk-b,yk+a});
    s1.insert({xk-b,yk-a});

    s2.insert({xq+a,yq+b});
    s2.insert({xq+a,yq-b});
    s2.insert({xq-a,yq+b});
    s2.insert({xq-a,yq-b});
    s2.insert({xq+b,yq+a});
    s2.insert({xq+b,yq-a});
    s2.insert({xq-b,yq+a});
    s2.insert({xq-b,yq-a});

    int count=0;
    for(auto &p:s1){
        if(s2.count(p)){
            count++;
        }
    }
    cout<<count<<endl;
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