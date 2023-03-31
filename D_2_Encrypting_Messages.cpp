#include <bits/stdc++.h>
using namespace std;

//#define int long long

signed main()
{
    int n,m,c;
    cin>>n>>m>>c;

    vector <int> a(n);
    vector <int> b(m+1);
    b[0]=0;

    for(int i=0;i<n;i++)
      cin>>a[i];

    for(int i=1;i<=m;i++)
    {
       cin>>b[i];
       b[i]+=b[i-1];
    }
      
    for(int i=0;i<n;i++)
    {
        int r=a[i]+b[min(i+1,m)]-b[max(i-(n-m),0)];
        cout<<r%c<<" ";
    }
    return 0;
}