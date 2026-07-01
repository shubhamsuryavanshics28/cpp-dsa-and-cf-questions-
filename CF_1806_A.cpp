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
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    if(d < b) return -1;
    long long diff1 = abs(b-d);
    a += diff1;
    long long diff2 = abs(a-c);

    if(a==c && b==d) return 0;
    else if(a>=c){
        return diff1 + diff2;
    }
    else return -1;
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