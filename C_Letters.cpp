#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n);
    vector<ll> b(m);

    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<m;i++)
      cin>> b[i];

    ll sum=0;
    ll t=0;
    for(int i=0;i<m;i++)
    {
        while(sum+a[t]<b[i])
          sum+=a[t++];
        
        cout<<t+1<<" "<<b[i]-sum<<endl;
    }
    return 0;
}