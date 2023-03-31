#include <bits/stdc++.h>
using namespace std;

//#define int long long

signed main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,q;
        cin>>n>>q;

        vector<int> prefix(n,0);
        vector<pair<int,int>> queries;

        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;

            queries.push_back({l,r});

            prefix[l]++;

            if(r+1<n)
              prefix[r+1]--;
        }

        for(int i=1;i<=n;i++)
          prefix[i]+=prefix[i-1];

        for(auto x: queries)
        {
            if(x.second+1<n)
                prefix[x.second+1]-=(x.second-x.first+1);
        }

        for(int i=1;i<n;i++)
          prefix[i]+=prefix[i-1];
        
        for(int i=0;i<n;i++)
          cout<<prefix[i]<<" ";       

        cout<<endl; 
    }
    return 0;
}