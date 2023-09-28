/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1879/problem/B
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
vector<ll> bia(ll n,ll ind)
{
    vector<ll>ans;
    while(n>0)
    {
        ans.push_back(n&1);
        n=n>>1;
    }
    while(ans.size()!=ind)ans.push_back(0);
    reverse(ans.begin(),ans.end());
    return ans;
}
void TEST_CASES()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>ar1;
    vector<pair<ll,ll>>ar2;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        ar1.push_back({x,i});
    }
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        ar2.push_back({x,i});
    }
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(),ar2.end());
//    cout<<"ar1>\n";
//    for(auto i:ar1)cout<<i.first<<" "<<i.second<<endl;
//    cout<<"ar2>\n";
//    for(auto i:ar2)cout<<i.first<<" "<<i.second<<endl;

    ll sum1=0;
    ll sum2=0;
    for(ll i=0; i<n; i++)sum1+=(ar1[0].first+ar2[i].first );
    for(ll i=0; i<n; i++)sum2+=(ar2[0].first+ar1[i].first );
    cout<<min(sum1,sum2)<<endl;
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
