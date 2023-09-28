/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1867/problem/B
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
    string s;
    cin>>s;
    ll ned =0;
    if(n&1)
    {
        for(ll i=0; i<=n/2; i++)if(s[i]!=s[n-i-1])ned++;
    }
    else
    {
        for(ll i=0; i<n/2; i++)if(s[i]!=s[n-i-1])ned++;
    }
    debug(ned)
    ll sm = n-ned*2;
    for(ll i=0; i<=n; i++)
    {
        if(i<ned)cout<<0;
        else if(i==ned)cout<<1;
        else
        {
            ll now = i-ned;
            if(now&1)
            {
                if((sm&1)&& now<=sm)cout<<1;
                else cout<<0;
            }
            else
            {
                if(now<=sm)cout<<1;
                else cout<<0;
            }
        }
    }
    cout<<endl;
    debug(ned,sm)
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
