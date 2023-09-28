// problem link >> https://codeforces.com/contest/1702/problem/C

#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void solve()
{
    ll n,q;
    cin>>n>>q;
    map<ll,ll>mx,mn;
    map<ll,string>vis;

    ll x;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(mn.find(x)==mn.end())mn[x]=i;
        vis[x]="imAS";
        mx[x]=i;
    }
    for(ll i=0; i<q; i++)
    {
        ll x,y;
        cin>>x>>y;

        if(vis[x]=="imAS" && vis[y]=="imAS" &&  mn[x]<mx[y])yes;
        else no;
    }
}
int main()
{
    Faster ;
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
