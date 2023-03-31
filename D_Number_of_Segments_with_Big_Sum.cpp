#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    
    vector<int> a(n);
    for(int i=0;i<n;i++)
      cin>>a[i];
    
    ll start=0;
    ll end=0;
    ll sum=0;
    ll cnt=0;

    while(end<n)
    {
        sum+=a[end];
        while(sum>=s)
        {
            sum-=a[start];
            start++;
        }
        end++;
        cnt+=end-start;
    }
    cout<<n*(n+1)/2-cnt;
    return 0;
}