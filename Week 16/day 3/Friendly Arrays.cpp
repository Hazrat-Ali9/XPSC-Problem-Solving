/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1870/problem/B
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
vector<ll> bia(ll n)
{
    vector<ll>ans;
    while(n>0)
    {
        ans.push_back(n&1);
        n=n>>1;
    }
    while(ans.size()<32)ans.push_back(0);
    reverse(ans.begin(),ans.end());
    return ans;
}
ll mn (ll n,vector<ll>b)
{
    vector<ll>ar = bia(n);
    for(auto i:b)
    {
        vector<ll>now = bia(i);
        for(ll j=0; j<32; j++)if(ar[j]==1 && now[j]==1)ar[j]=0;
    }
    ll sum =  0;
    reverse(ar.begin(),ar.end());
    for(ll i=0; i<32; i++)if(ar[i])sum+= (1<<i);
    return sum;
}
ll mx (ll n,vector<ll>b)
{
    vector<ll>ar = bia(n);
    for(auto i:b)
    {
        vector<ll>now = bia(i);
        for(ll j=0; j<32; j++)if(ar[j]==0 && now[j]==1)ar[j]=1;
    }
    ll sum =  0;
    reverse(ar.begin(),ar.end());
    for(ll i=0; i<32; i++)if(ar[i])sum+= (1<<i);
    return sum;
}
void TEST_CASES()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    vector<ll>b(m);
    for(auto &i:b)cin>>i;
    ll xoR = a[0];
    for(ll i=1; i<n; i++)xoR = xoR ^ a[i];
    if(n&1) cout<<xoR<<" "<<mx(xoR,b)<<endl;
    else cout<<mn(xoR,b)<<" "<<xoR<<endl;
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
