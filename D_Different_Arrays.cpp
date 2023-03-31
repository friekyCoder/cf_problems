#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void chalja()
{
    int n,i,j,l,r;
    cin>>n;
    if(n==2)
    {
        cout<<"1 3"<<endl;
        cout<<"4 2"<<endl;
        return;
    }
    vector <int> v(n*n);
    for(i=0;i<n*n;i++)
    {
        v[i]=(i+1);
    }
    l=0,r=n*n-1;
    bool ok=true;
    vector <vector<int>> ans;
    for(i=0;i<n;i++)
    {
        vector <int> a;
        for(j=0;j<n;j++)
        {
            if(ok)
            {
                a.push_back(v[l++]);
                ok=false;
            }
            else
            {
                a.push_back(v[r--]);
                ok=true;
            }
        }
        ans.push_back(a);
    }
    if(n%2==0)
    {
        for(i=1;i<n;i+=2)
        {
            reverse(ans[i].begin(),ans[i].end());
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
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