/*
*/
///PROBLEM LINK -> https://cses.fi/problemset/result/7186212/
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
    ll x,y;
    cin>>x>>y;
    ll top,ri;
    if(x&1)ri=(x-1)*(x-1)+1;
    else ri = x*x;
    if(y&1)top = y*y;
    else top =(y-1)*(y-1)+1;
    debug(top,ri)
    if(x&1)
    {
        if(y<=x)cout<<ri+y-1<<endl;
        else
        {
            if(y&1)cout<<top-x+1<<endl;
            else cout<<top+x-1<<endl;
        }
    }
    else
    {
        if(y<=x)cout<<ri-y+1<<endl;
        else
        {
            if(y&1)cout<<top-x+1<<endl;
            else cout<<top+x-1<<endl;
        }
    }
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
