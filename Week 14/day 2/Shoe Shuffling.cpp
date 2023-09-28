/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1691/B
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
    map<ll,ll>mp;
    ll n;
    cin>>n;
    vector<ll>ar(n+1);
    vector<pair<ll,ll>>ar1;
    vector<ll>ans(n+1,0);
    for(ll i=1; i<=n; i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
        ar1.push_back({ar[i],i});
    }
    for(ll i=1; i<=n; i++)
    {
        if(mp[ar[i]]==1)
        {
            cout<<-1<<endl;
            return;
        }
    }
    sort(ar1.begin(),ar1.end());
    for(ll i=0; i<n;)
    {
        ll now = ar1[i].first;
        if(i+1 <n && ar1[i+1].first==now)
        {
            while(i+1<n && ar1[i+1].first==now)
            {
                ll f = ar1[i].second;
                ll ne = ar1[i+1].second;
                if(ans[f]==0)ans[ne]=f;
                else ans[ne]=ans[f];
                ans[f]=ne;
                i++;
            }
        }
        i++;
    }
    for(ll i=1; i<=n; i++)cout<<ans[i]<<" ";
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
