/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1547/problem/C
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
    ll k,n,m;
    cin>>k>>n>>m;
    queue<ll>ar1,ar2;
    vector<ll>ar3;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        ar1.push(x);
    }
    for(ll i=0; i<m; i++)
    {
        ll x;
        cin>>x;
        ar2.push(x);
    }
    while(ar1.size() || ar2.size())
    {
        if(ar1.size() && ar2.size())
        {
            if(ar1.front()<= ar2.front())
            {
                ar3.push_back(ar1.front());
                ar1.pop();
            }
            else
            {
                ar3.push_back(ar2.front());
                ar2.pop();
            }
        }
        else if (ar1.size())
        {
            ar3.push_back(ar1.front());
            ar1.pop();
        }
        else if (ar2.size())
        {
            ar3.push_back(ar2.front());
            ar2.pop();
        }
    }
    for(auto i:ar3)
    {
        if(i==0)k++;
        else if(i>k)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:ar3)cout<<i<<" ";
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
