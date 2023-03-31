#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/* int main()         O(N*N)
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
     
    int ans=1;

    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
         ans=max(ans,__gcd(arr[i],arr[j]));
    }
    
    cout<<ans;
    return 0;

} */

int main()
{
    int n;
    cin>>n;

    vector<int> range(1000001,0);

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        range[a]++;
    }

    for(int i=1e6;i>=1;i--)
    {
        int cnt=0;
        for(int j=i;j<=1e6;j+=i)
          cnt+=range[j];

        if(cnt>=2)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
