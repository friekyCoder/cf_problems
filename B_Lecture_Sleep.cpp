#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;

     ll add=0;

    vector<ll> a(n);
    vector<ll> b(n);

    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>> b[i];
        if(b[i]){
            add+=a[i];
            a[i]=0;
        } 
    }
   
    vector<ll> prefix(n+1);
    prefix[0]=0;

    for(int i=1;i<=n;i++)
      prefix[i]=prefix[i-1]+a[i-1];
    
    ll t=0;
    for(int i=n;i>=k;--i)
    {
        t=max(t,prefix[i]-prefix[i-k]);
    }
    cout<<add+t;

    return 0;
}