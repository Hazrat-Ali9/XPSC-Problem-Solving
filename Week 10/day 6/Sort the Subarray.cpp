#include<bits/stdc++.h> /// problem link >> https://codeforces.com/contest/1821/submission/219112091
using namespace std;int main(){int t;cin>>t;while(t--){int n;cin>>n;vector<int>ar1(n);vector<int>ar2(n);for(auto &i:ar1)cin>>i;for(auto &i:ar2)cin>>i;int l,r;for(int i=0; i<n; i++)if(ar1[i]!=ar2[i]){l=i;break;}for(int i=n-1; i>=0; i--)if(ar1[i]!=ar2[i]){r=i;break;}while(l>0 && ar2[l-1]<=ar2[l])l--;while(r<n-1 && ar2[r+1]>=ar2[r])r++;cout<<l+1<<" "<<r+1<<endl;}return 0;}
