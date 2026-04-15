#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> primes;
    vector<bool> sieve(200000, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2; i < 200000; i++)
        if(sieve[i])
            for(int j = 2*i; j < 200000; j += i)
                sieve[j] = false;
    for(int i = 2; i < 200000; i++)
        if(sieve[i]) primes.push_back(i);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
            cout << (long long)primes[i] * primes[i+1] << " ";
        cout << "\n";
    }
}