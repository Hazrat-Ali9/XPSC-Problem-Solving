/*

*/
///PROBLEM LINK -> https://codeforces.com/contest/1873/problem/F
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
    ll n,k;
    cin>>n>>k;
    vector<ll>ar1(n+1);
    vector<ll>ar2(n+1);
    for(ll i=1; i<=n; i++)cin>>ar1[i];
    for(ll i=1; i<=n; i++)cin>>ar2[i];
    ll now = 0, lf=1, hi=1;
    ll sum =0;
    bool add = true;
    int flag=0;
    while(lf<=n)
    {
        if(hi==n)flag++;
        if(flag>2)break;
        if(add)sum+=ar1[hi];
        if(sum<=k)
        {
            ll dif = hi-lf+1;
            now=max(now,dif);
            if(hi<n)
            {
                ll past = hi;
                hi++;
                if(ar2[past]%ar2[hi]!=0)
                {
                    sum=0;
                    lf=hi;
                }
                add=true;
            }
        }
        else
        {
            sum-=ar1[lf];
            lf++;
            add=false;
        }
    }
    cout<<now<<endl;
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
