/*
*/
///PROBLEM LINK ->https://codeforces.com/contest/1864/problem/C
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
    ll n1 = n;
    vector<bool>ar;
    while(n>0)
    {
        ar.push_back((n&1));
        n = n>>1;
    }
    ll sz= ar.size()-1;
    ll ned = pow(2,sz);
    n = n1;
    vector<ll>ans;
    ans.push_back(n);
    while(n!=ned)
    {
        for(ll i=0; i<ar.size(); i++)
        {
            if(ar[i]==true)
            {
                n-=pow(2,i);
                ans.push_back(n);
                ar[i]=false;
                break;
            }
        }
    }
    while(n!=1)
    {
        ans.push_back(n/2);
        n=n/2;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
    nl;
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
