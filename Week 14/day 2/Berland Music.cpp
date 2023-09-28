/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1622/B
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
void TEST_CASES()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    string s;
    cin>>s;
    ll dis=0;
    ll lik;
    for(auto i:s)if(i=='0')dis++;
    vector<pair<ll,ll>>ze;
    vector<pair<ll,ll>>on;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0') ze.push_back({ar[i],i});
        else on.push_back({ar[i],i});
    }
    sort(ze.begin(),ze.end());
    sort(on.begin(),on.end());
    vector<ll>ans(n);
    ll num=1;
    for(ll i=0; i<ze.size(); i++)
    {
        ans[ze[i].second]=num;
        num++;
    }
    num=dis+1;
    for(ll i=0; i<on.size(); i++)
    {
        ans[on[i].second]=num;
        num++;
    }
    for(auto i:ans)cout<<i<<" ";
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
