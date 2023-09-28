/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1415/B
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
    ll n,m;
    cin>>n>>m;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll ans=1e18;
    for(ll c=1; c<=100; c++)
    {
        ll now=0;
        ll ind =-1;
        for(ll i=0; i<n; i++)
        {
            if(ar[i]!=c)
            {
                ind = i;
                break;
            }
        }
        if(ind ==-1)
        {
            cout<<0<<endl;
            return;
        }
        bool flag=false;
        ll l=ind;
        ll r= l+m-1;
        if(r>n-1)
        {
            r=n-1;
            flag=true;
        }
        while(r<n)
        {
            for(ll i=l; i<=r; i++)
            {
                if(ar[i]!=c)
                {
                    now++;
                    break;
                }
            }
            bool ys = false;
            for(ll j=r+1; j<n; j++)
            {
                if(ar[j]!=c)
                {
                    ys=true;
                    l=j;
                    break;
                }
            }
            if(!ys)l+=m;
            r= l+m-1;
            if(r>n-1 && flag==false)
            {
                r=n-1;
                flag=true;
            }
        }
        ans=min(now,ans);
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
