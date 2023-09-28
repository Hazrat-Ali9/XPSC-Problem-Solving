/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1816/B
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
    vector<ll>ar1(n);
    vector<ll>ar2(n);
    ar1[0]=n*2;
    ar2[n-1]=n*2-1;
    ll now=2;
    for(ll i=1; i<n; i+=2)
    {
        ar1[i]=now;
        now+=2;
    }
    now=1;
    for(ll i=0; i<n; i+=2)
    {
        ar2[i]=now;
        now+=2;
    }
    now = n*2 - 2;
    for(ll i=2; i<n-1; i+=2)
    {
        ar1[i]=now;
        now-=2;
    }
    now = n*2 - 3;
    for(ll i=1; i<n-2; i+=2)
    {
        ar2[i]=now;
        now-=2;
    }
    for(auto i:ar1)cout<<i<<" ";
    for(auto i:ar2)cout<<i<<" ";
    cout<<endl;
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
