#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
   cin>>a[i];
  }
  reverse(a,a+n);
  int sum=0;
  vector<int> s;
  for(int i=0;i<n/2;i++){
   s.push_back(a[i]);
   s.push_back(a[n-i-1]);
  }
  if(n&1){
   s.push_back(a[n/2]);
  }

  int f=0;
  for(int i=0;i<n;i++){
   if(s[i]==sum){
    cout<<"NO"<<endl;
    f=1;
   }
   sum+=s[i];
  }
  if(f==0){
  cout<<"YES"<<endl;
  for(auto it: s){
   cout<<it<<" ";
  }
  cout<<endl;
 }
}
return 0;
}