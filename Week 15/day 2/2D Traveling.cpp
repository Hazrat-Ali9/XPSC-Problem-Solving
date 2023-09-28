/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1869/submission/222752659
#include <bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using  pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<endl
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
bool is_prime(ll n)
{
    if (n == 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (ll i = 3; i * i <= n; i++)if (n % i == 0)return false;
    return true;
}
void TEST_CASES()
{
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>>ar(n+1);
    if(a<b)swap(a,b);
    for(ll i=1; i<=n; i++)
    {
        ll x,y;
        cin>>x>>y;
        ar[i]= {x,y};
    }
    if(a<=k && b<=k)
    {
        HERE;
        cout<<0<<endl;
        return;
    }
    ll ax = ar[a].first;
    ll ay = ar[a].second;
    ll bx = ar[b].first;
    ll by = ar[b].second;
    ll mn1=1e18;
    ll mn2=1e18;
    ll ans = abs(ar[a].first - ar[b].first )+abs(ar[a].second - ar[b].second );
    if(a<=k)
    {
        for(ll i=1; i<=k; i++)
        {
            ll nx = ar[i].first;
            ll ny = ar[i].second;
            mn1 = min(mn1,abs(ax-nx)+abs(ay-ny));
            mn2 = min(mn2,abs(bx-nx)+abs(by-ny));
        }
        HERE;
        cout<<min(ans,mn2)<<endl;
        return;
    }
    for(ll i=1; i<=k; i++)
    {
        ll nx = ar[i].first;
        ll ny = ar[i].second;
        mn1 = min(mn1,abs(ax-nx)+abs(ay-ny));
        mn2 = min(mn2,abs(bx-nx)+abs(by-ny));
    }
    HERE;
    ans=min(ans,mn1+mn2);
    cout<<ans<<endl;
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
