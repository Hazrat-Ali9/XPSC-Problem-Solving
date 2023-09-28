/*
*/
///PROBLEM LINK ->  https://codeforces.com/contest/1862/problem/D
#include <bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using PBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<endl
#define sp <<" "
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
void TEST_CASES()
{
    ll n;
    cin>>n;
    ll low = 1,hi = 10000000000;
    ll ans;
    while(low<=hi)
    {
        ll mid = low+ (hi-low)/2;
        ll now = mid*(mid-1)/2;
        if(now == n)
        {
            cout<<mid<<endl;
            return;
        }
        if(now>n)
        {
            ans = mid;
            hi = mid-1;
        }
        else low  = mid +1;
    }
    ans --;
    cout<<ans+ n - ans*(ans-1)/2<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
