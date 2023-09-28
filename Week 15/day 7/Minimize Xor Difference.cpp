/*
*/
///PROBLEM LINK -> https://www.codechef.com/problems/XORDIF
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
vector<ll> bia(ll n)
{
    vector<ll>ans;
    while(n>0)
    {
        ans.push_back(n&1);
        n=n>>1;
    }
    while(ans.size()<32)ans.push_back(0);
    reverse(ans.begin(),ans.end());
    return ans;
}
void TEST_CASES()
{
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    vector<ll>ar1 = bia(a);
    vector<ll>ar2 = bia(b);
    vector<ll>ans;
    debug(ar1)
    debug(ar2)
    debug(ans)
    ll ind = -1;
    for(ll i=0; i<32; i++)
    {
        if(ar1[i]!=ar2[i])
        {
            ind = i;
            break;
        }
    }
    if(ind != -1)
    {
        if(ar1[ind]==1)
        {
            ans =ar1;
            ans[ind]=0;
            for(ll i=ind+1; i<32; i++)if(ar2[i]==0)ans[i]=1;
        }
        else
        {
            ans =ar2;
            ans[ind]=0;
            for(ll i=ind+1; i<32; i++)if(ar1[i]==0)ans[i]=1;
        }
    }
    ll sum =  0;
    reverse(ans.begin(),ans.end());
    for(ll i=0; i<32; i++)if(ans[i])sum+= (1<<i);
    ll res = abs((a ^ sum)-(b ^ sum));
    debug(res,sum)
    cout<<sum<<endl;
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
