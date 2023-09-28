/*

*/

///PROBLEM LINK ->  https://codeforces.com/problemset/problem/1843/D

#include<bits/stdc++.h>
using namespace std;
//......... macros.........
#define ull  unsigned long long
#define ll long long
#define ld double
#define pii pair<int,int>
#define F first
#define S  second
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define nl cout<<"\n"
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
//.......global.........
vector<vector< ll>>adj(200005);
ll leaf_counter( ll p, ll c);
vector<ll>lefnoed(200005);
int main()
{
    Faster;
    ll t;
    cin>>t;
    while(t--)
    {
        ll v;
        cin>>v;
        for( ll i=1; i<v; i++)
        {
            ll u,v ;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll x= leaf_counter(0,1);

        ll q;
        cin>>q;
        for(ll i =0; i<q; i++)
        {
            ll x,y;
            cin>>x>>y;
            cout<<lefnoed[x] * lefnoed[y]<<endl;
        }
        lefnoed.resize(200005,0);
        for (ll i = 1; i <= v; i++)
        {
            adj[i].clear();
        }
    }
    return 0;
}


ll leaf_counter( ll p, ll c)
{
    if(adj[c].size()==1 && adj[c].back()==p)return lefnoed[c]=1;
    ll  lef =0;
    for( ll i=0; i<adj[c].size(); i++)
    {
        if(adj[c][i]!=p)
            lef+=leaf_counter(c,adj[c][i]);
    }
    lefnoed[c]=lef;
    return lef;
}
