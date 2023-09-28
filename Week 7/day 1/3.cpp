/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/467/problem/B

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
    ll n,m,k;
    cin>>n>>m>>k;
    ll fedor;
    vector<ll>ar(m);
    for(auto &i:ar)cin>>i;
    cin>>fedor;
    ll ans=0;
    for(ll i=0; i<m; i++)
    {
        ll now = fedor^ar[i];
        if (__builtin_popcount(now) <= k)
            ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    solve();
    return 0;
}
