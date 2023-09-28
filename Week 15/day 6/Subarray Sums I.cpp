/*
*/
///PROBLEM LINK ->https://cses.fi/problemset/task/1660/
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
    ll n,x;
    cin>>n>>x;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll i=0,j=0;
    ll sum =ar[i];
    ll ans = 0;
    /*
    5 7
    2 4 1 2 7
    ans = 3
    */
    while(i<n && j<n)
    {
        debug(sum,i,j,ans)
        if(sum==x)
        {
            ans++;
            sum-=ar[i];
            i++;
            j++;
            if(j>=n)break;
            sum+=ar[j];
        }
        else if(sum<x)
        {
            j++;
            if(j>=n)break;
            sum+=ar[j];
        }
        else
        {
            sum-=ar[i];
            i++;
            if(i>=n)break;
        }
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
    // cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
