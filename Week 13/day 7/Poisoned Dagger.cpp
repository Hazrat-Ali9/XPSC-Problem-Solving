/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1613/C
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
    ll n,h;
    cin>>n>>h;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll ans = h;
    ll l=1,r=h+10;
    while(l<=r)
    {
        ll sum=0;
        ll k = l+(r-l)/2;
        for(ll i=0; i<n; i++)
        {
            ll now;
            if(i<n-1) now = min(k,ar[i+1]-ar[i]);
            else now=k;
            sum+=now;
        }
        if(sum>h)
        {
            ans=min(k,ans);
            r=k-1;
            debug(sum,k,h)
        }
        else if(sum==h)
        {
            cout<<k<<endl;
            return;
        }
        else if(sum<h)l=k+1;
    }
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
