#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    
    sort(a,a+n);

    int ans=n-1;
    for(int i=0;i<n;i++)
    {
        int mini=a[i];
        int maxi=2*mini;
        int index=upper_bound(a, a + n,maxi)-a;
        index--;
        int len=index-i+1;
        ans=min(ans,len);
    }
    cout<<ans;
    return 0;
}