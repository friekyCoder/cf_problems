#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++)
      cin>>a[i];
    
    sort(a,a+n);
    
    int zero=0,one=0,conse=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
          zero++;
        else if(a[i]==1)
          one++;
        else if(a[i]==a[i-1]+1 && i!=0)
          conse++;
    }

    if(one!=0 && zero!=0)
    {
        cout<<"NO";
        return;
    }

    if(one!=0)
    {
       if(conse==0)
         cout<<"YES";
       else
         cout<<"NO";
    }
    else
     cout<<"YES";
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
