/*
*/
///PROBLEM LINK -> https://cses.fi/problemset/task/1629/
#include <bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using  pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define ld double
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
bool custom_comparator(pair<ll,ll>a,pair<ll,ll>b)
{
    ll lenA = a.second-a.first;
    ll lenB = b.second-b.first;
    if(a.second==b.second)return (lenA<lenB);
    return(a.second<b.second);
}
void TEST_CASES()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>ar;
    for(ll i=0; i<n; i++)
    {
        ll st,en;
        cin>>st>>en;
        ar.push_back({st,en});
    }
    sort(ar.begin(),ar.end(),custom_comparator);
    ll ans = 1;
    ll pre = ar[0].second;
    for(ll i=1; i<n; i++)
    {
        ll cu_st = ar[i].first;
        if(pre<=cu_st)
        {
            ans++;
            pre=ar[i].second;
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
    //cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
