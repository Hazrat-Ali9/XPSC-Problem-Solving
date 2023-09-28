/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1760/E
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
    ll n;
    cin>>n;
    vector<ll>ar(n),zero(n),one(n);
    for(auto &i:ar)cin>>i;
    one[0]=0;
    ll now =0;
    if(ar[0]==1)now++;
    for(ll i=1; i<n; i++)
    {
        one[i]=now;
        if(ar[i]==1)now++;
    }
    now=0;
    zero[n-1]=0;
    if(ar.back()==0)now++;
    for(ll i=zero.size()-2; i>=0; i--)
    {
        zero[i]=now;
        if(ar[i]==0)now++;
    }
    debug(one)
    debug(zero)
    ll initial =0;
    for(ll i=0; i<n; i++)if(ar[i]==1)initial+=zero[i];
    debug(initial)
    ll ans = initial;
    for(ll i=0; i<n; i++)
    {
        ll now = initial;
        if(ar[i]==1)
        {
            now+=one[i];
            now-=zero[i];
            ans=max(now,ans);
        }
        else
        {
            now-=one[i];
            now+=zero[i];
            ans=max(now,ans);
        }
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
