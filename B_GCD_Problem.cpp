#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;

    if(n%2==0)
      cout<<2<<" "<<n-3<<" "<<1<<endl;
    else
    {
        int t=(n-1)/2;

        if(t%2==0)
          cout<<t-1<<" "<<t+1<<" "<<1<<endl;
        else
          cout<<t-2<<" "<<t+2<<" "<<1<<endl;
    }
  }

  return 0;
}