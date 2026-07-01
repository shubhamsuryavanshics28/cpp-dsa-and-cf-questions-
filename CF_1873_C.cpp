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
    vector<vector<char>> v(10, vector<char>(10));

    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            cin >> v[i][j];
        }
    }

    int sum = 0;

    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            if(v[i][j]=='X'){
                int score = min(min(i+1, 10-i), min(j+1, 10-j));
                sum += score;
            }
        }
    }

    return sum;
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