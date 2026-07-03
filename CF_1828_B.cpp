#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define ld long double
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1000000007;
const ll INF = 1e18;

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

template<typename T>
void input(vector<T>& v){
    for(auto &x:v) cin>>x;
}

template<typename T>
void output(vector<T>& v){
    for(auto &x:v) cout<<x<<' ';
    cout<<endl;
}

template<typename T>
void input2(vector<vector<T>>& v){
    for(auto &row:v)
        for(auto &x:row)
            cin>>x;
}

template<typename T>
void output2(vector<vector<T>>& v){
    for(auto &row:v){
        for(auto &x:row) cout<<x<<' ';
        cout<<endl;
    }
}

ll gcd(ll a,ll b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}

ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}

bool isPrime(ll n){
    if(n<2) return false;
    for(ll i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

ll modpow(ll a,ll b,ll mod=MOD){
    ll res=1;
    while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

ll modinv(ll x){
    return modpow(x,MOD-2);
}

vector<int> sieve(int n){
    vector<int> prime;
    vector<bool> vis(n+1,false);
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            prime.pb(i);
            for(int j=i+i;j<=n;j+=i)
                vis[j]=true;
        }
    }
    return prime;
}

ll sum(vector<ll>& v){
    return accumulate(all(v),0LL);
}

int sum(vector<int>& v){
    return accumulate(all(v),0);
}

ll mx(vector<ll>& v){
    return *max_element(all(v));
}

ll mn(vector<ll>& v){
    return *min_element(all(v));
}

int mx(vector<int>& v){
    return *max_element(all(v));
}

int mn(vector<int>& v){
    return *min_element(all(v));
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    input(v);

    vector<int> arr;
    auto g = 0;
    for(int i=0;i<n;++i){
        g = __gcd(g,abs((i+1)-v[i]));
    }
    
    cout<<g<<endl;
    return;
    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}