/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1015/problem/C

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
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>def;
    ll insum=0;
    ll comsum=0;
    ll ai,bi;
    for(ll i=0; i<n; i++)
    {
        cin>>ai>>bi;
        insum+=ai;
        comsum+=bi;
        def.push_back(ai-bi);
    }
    sort(def.begin(), def.end(),greater<ll>());
    if(comsum>m)
    {
        cout<<-1<<endl;
        return;
    }
    if(insum<=m)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        if(insum>m)insum-=def[i];
        if(insum<=m)
        {
            cout<<i+1<<endl;
            return;
        }
    }
}
int main()
{
    Faster ;
    ll t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
