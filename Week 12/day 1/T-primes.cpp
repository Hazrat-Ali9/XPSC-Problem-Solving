/*
*/
///PROBLEM LINK ->https://codeforces.com/contest/230/problem/B
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
bool is_T_prime(ll n)
{
    if(n<3)return false;
    ll x = sqrtl(n);
    if(x*x != n)return false;
    for(ll i = 2; i*i<=x; i++)if(x%i==0)return false;
    return true;
}
void TEST_CASES()
{
    ll n;
    cin>>n;
    vector<bool>ans;
    ll x;
    for(ll i=1; i<=n; i++)
    {
        cin>>x;
        if(is_T_prime(x))ans.push_back(true);
        else ans.push_back(false);
    }
    for(auto i:ans)
    {
        if(i)yes;
        else no;
    }

}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    //  cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
