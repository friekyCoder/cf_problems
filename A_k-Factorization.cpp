#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
   ll n,k;
  cin >> n >> k;
  
  vector<int> ans;

  for(ll i=2;i*i<=n;i++)
  {
    while(n%i==0)
    {
        ans.push_back(i);
        n=n/i;
    }
  }
  
  if(n>1)
   ans.push_back(n);
  
  int size=ans.size();

  if(size<k)
   cout<<-1<<endl;
 else{

    for(ll i=k;i<size;i++)
     ans[k-1]*=ans[i];

    for(ll i=0;i<k;i++)
      cout<<ans[i]<<" ";
    
    cout<<endl;
 }
 
  return 0;
}