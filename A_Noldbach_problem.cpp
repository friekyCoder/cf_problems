
#include "bits/stdc++.h"
#pragma GCC optimize "trapv" // comment in case of TLE
using namespace std;
using ll=long long;


void solve()
{
    const int N = 1010;
    vector<bool> isPrime(N + 1, 1);
    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = 0;
    }

    vector<int> pr;
    for(int i=0;i<N;i++) {
        if (isPrime[i]) 
          pr.push_back(i);
    }
    
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;

    for(int i=0;i<pr.size()-1;i++) {
        if (isPrime[pr[i] + pr[i + 1] + 1]) 
         mp[pr[i] + pr[i + 1] + 1]++;

    }

    for(int i=0;i<n+1;i++)
    {
        if (mp[i])
        {
            k--;
        }
        if (k == 0)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO\n";
}

signed main()
{
     solve();
   
    return 0;
}
