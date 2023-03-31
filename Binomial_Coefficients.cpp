#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

ll fact[1000001], modinv[1000001];

ll expo(ll base, ll pow) {
	ll ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % MOD;
		base = base * base % MOD;
		pow >>= 1;
	}
	return ans;
}

void precompute()
{
    fact[0]=1;
    modinv[0]=1;

    for(ll i=1;i<=1000000;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        modinv[i]=expo(fact[i],MOD-2);
    }
}

ll ncr(ll n,ll r)
{
    if(n<0 || r<0 || r>n)
      return 0;
    
    ll ans=(((fact[n]*modinv[r])%MOD)*modinv[n-r])%MOD;
    return ans;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

    precompute();

	int t;
	cin >> t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        ll res=ncr(a,b);
        cout<<res<<endl;
    }

	
	return 0;
}