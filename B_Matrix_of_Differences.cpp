#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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


void chalja()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<"1 3"<<endl;
        cout<<"4 2"<<endl;
        return;
    }
    vector <int> v(n*n);

    int i,j;
    for(i=0;i<n*n;i++)
    {
        v[i]=i+1;
    }
    int p=0;
    int q=n*n-1;
    bool flag=true;

    vector <vector<int>> res;
    for(i=0;i<n;i++)
    {
        vector <int> a;
        for(j=0;j<n;j++)
        {
            if(flag)
            {
                a.push_back(v[p++]);
                flag=false;
            }
            else
            {
                a.push_back(v[q--]);
                flag=true;
            }
        }
        res.push_back(a);
    }
    if(n%2==0)
    {
        for(i=1;i<n;i+=2)
        {
            reverse(res[i].begin(),res[i].end());
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    int t; cin>>t;
    while(t--) 
      chalja();

    return 0;
}