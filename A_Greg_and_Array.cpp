#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define bg begin()
#define rbg rbegin()
#define ed end()
#define sz size()
#define ff first
#define ss second
#define fon for(i=0;i<n;i++)
#define foj for(j=0;j<n;j++)
#define JSM ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
void ppp(int a)          { cerr<<a; }
void ppp(ll a)           { cerr<<a; }
void ppp(long double a)  { cerr<<a; }
void ppp(double a)       { cerr<<a; }
void ppp(char a)         { cerr<<a; }
void ppp(string a)       { cerr<<a; }
void ppp(bool a)         { cerr<<a; } 
template<class T , class V> void ppp(pair<T,V> p) {cerr<<"{"; ppp(p.ff); cerr<<','; ppp(p.ss); cerr<<"}";}
template<class T> void ppp(vector<T> v)  {cerr<<"[ ";for(T x:v) ppp(x), cerr<<" ";cerr<<']';}
template<class T> void ppp(set<T> v){cerr<<"[ ";for(T x:v) ppp(x) , cerr<<" ";cerr<<']';}
template<class T, class V> void ppp(map<T,V> m){cerr<<endl;for(auto x:m){ppp(x.ff);cerr<<" -> ";ppp(x.ss);cerr<<endl;}cerr<<endl;}
template<class T> void ppp(deque<T> v)  {cerr<<"[ ";for(T x:v) ppp(x), cerr<<" ";cerr<<']';}
template <typename T, typename... V> void ppp(T t, V... v){ppp(t);  if (sizeof...(v))   cerr << ", ";   ppp(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...)  cerr << #x << " -> ";  ppp(x); cerr<<endl 
#else
#define dbg(x...);
#endif
int main()
{
    JSM
    ll t,n,m,x,y,p,q,i,j,k,answer=0;
    cin>>n>>m>>k;
    vector<ll> a(n); 
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    vector<vector<ll>> operations(m , vector<ll> (3 , 0));
    for(auto &x : operations){
        for(auto &y : x) cin >> y;
    }

    vector<ll> fre(m + 1 , 0); // fre of each operation

    while(k--){
        ll L , R;
        cin >> L >> R;
        L-- , R--;
        fre[L] += 1;
        fre[R + 1] -= 1; // index : m R = m - 1 
    }

    for(i = 1; i <= m ; i++) fre[i] += fre[i-1];


    vector<ll> difference(n + 1 , 0); // diff array for given array

    for(i = 0 ; i < m ; i++){
        ll net_update = operations[i][2] * fre[i];
        ll L = operations[i][0] , R = operations[i][1];
        L-- , R--;
        difference[L] += net_update;
        difference[R + 1] -= net_update; 
    }

    for(i = 0 ; i < n ; i++){
        x = a[i];
        if(i > 0) difference[i] += difference[i-1];
        x += difference[i];
        cout << x << " ";
    }
}


