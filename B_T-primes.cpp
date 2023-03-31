#include <bits/stdc++.h>
using namespace std;
using ll = long long;

set<ll> s;
bool primes[1000005];
fill(primes,primes+1000005,true);
primes[0]=primes[1]=false;

void sieve()
{
    for(ll i=2;i*i<=1000000;i++)
    {
        if(primes[i])
        {
            s.insert(i*i);

            for(ll j=i*i;j<=1000000;j+=i)
              primes[j]=false;
        }
    }
}

int main() {

  sieve();
  ll n;
  cin >> n;
  
  while(n--)
  {
    int a;
    cin>>a;
    
    if(s.find(a)!=s.end())
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }

  return 0;
}