/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1335/problem/C
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
    ll n;
    cin>>n;
    ll fre[200005];
    for(int i=1; i<=200004; i++)fre[i]=0;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        fre[x]++;
    }
    ll dis=0;
    ll mX=0;
    for(int i=1; i<=n; i++)
    {
        if(fre[i]!=0)
        {
            dis++;
            mX=max(mX,fre[i]);
        }
    }
//    for(auto i:fre)cout<<i<<" ";
//    cout<<endl;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    if(dis==mX)cout<<dis-1<<endl;
    else cout<<min(dis,mX)<<endl;

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
