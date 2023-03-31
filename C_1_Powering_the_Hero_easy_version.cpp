#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++)
          cin>>v[i];

        priority_queue<int> pq;
        int res=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
              pq.push(v[i]);
            else
            {
                if(!pq.empty())
                {
                  res+=pq.top();
                  pq.pop();
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}