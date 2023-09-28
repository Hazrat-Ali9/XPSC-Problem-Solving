/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1685/problem/A
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
    int n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    if(n&1)
    {
        no;
        return;
    }
    sort(ar.begin(),ar.end());
    ll huf = n/2;
    vector<ll>sm;
    vector<ll>lrg;
    for(ll i=0; i<huf; i++)sm.push_back(ar[i]);
    for(ll i=huf; i<n; i++)lrg.push_back(ar[i]);
    debug(ar)
    debug(sm)
    debug(lrg)
    vector<ll>ans;
    for(ll i=0; i<sm.size(); i++)
    {
        ans.push_back(sm[i]);
        ans.push_back(lrg[i]);
    }
    debug(ans)
    for(ll i=0; i<n; i++)
    {
        if(i==0)
        {
            if(ans[i]<ans[i+1] && ans[i]<ans.back())continue;
            else if(ans[i]>ans[i+1] && ans[i]>ans.back())continue;
            else
            {
                HERE
                no;
                return;
            }
        }
        else if(i==n-1)
        {
            if(ans[i]<ans[i-1] && ans[i]<ans[0])continue;
            else   if(ans[i]>ans[i-1] && ans[i]>ans[0])continue;
            else
            {
                HERE;
                no;
                return;
            }
        }
        else
        {
            if(ans[i]<ans[i-1] && ans[i]<ans[i+1])continue;
            else   if(ans[i]>ans[i-1] && ans[i]>ans[i+1])continue;
            else
            {
                HERE
                no;
                return;
            }
        }

    }
    yes;
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
