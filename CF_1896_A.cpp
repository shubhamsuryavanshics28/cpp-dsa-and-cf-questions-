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

string solve()
{
    int n; cin>>n;
    vector<int> v(n); 
    input(v,n);
    vector<int> arr(n);
    arr = v;
    sort(arr.begin(),arr.end());
    bool changed = true;
    while(changed){
        changed = false;
        for(int i = 1; i < n-1; i++){
            if(v[i] > v[i-1] && v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                changed = true;
            }
        }
    }
    if(v==arr){
        return "YES";
    }else return "NO";
    
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