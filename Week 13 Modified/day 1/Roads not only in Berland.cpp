#include<bits/stdc++.h> /// link >> https://codeforces.com/contest/25/problem/D
using namespace std;
const int N=1005;
vector<int>par(N);
vector<int>sz(N);
void make_set(int v)
{
    par[v]=v;
    sz[v]=1;
}
int find_set(int n)
{
    if(par[n]==n)return n;
    return par[n]=find_set(par[n]);
}
void unioN(int u,int v)
{
    int a=find_set(u);
    int  b=find_set(v);
    if(a!=b)
    {
        if(sz[a]<sz[b])swap(a,b);
        par[b]=a;
        sz[a]+=sz[b];
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)make_set(i);
    bool cycle=false;
    vector<pair<int,int>>cy_n;
    vector<pair<int,int>>need;
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        if(find_set(u)==find_set(v))
        {
            cycle=true;
            cy_n.push_back({u,v});
        }
        else unioN(u,v);
    }
    for(int i=2; i<=n; i++)if(find_set(1)!=find_set(i))
        {
            need.push_back({1,i});
            unioN(1,i);
        }
    if(cycle)
    {
        cout<<cy_n.size()<<endl;
        for(int i=0; i<cy_n.size(); i++)cout<<cy_n[i].first<<" "<<cy_n[i].second<<" "<<need[i].first<<" "<<need[i].second<<endl;
    }
    else cout<<0<<endl;
    return 0;
}
