/*
*/
///PROBLEM LINK ->  https://codeforces.com/problemset/problem/757/B
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
    map<ll,ll>m;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    for(auto i:ar)
    {
        if(i==1)continue;
        m[i]++;
        for(ll j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                if(j!=i/j)
                {
                    m[j]++;
                    m[i/j]++;
                }
                else m[j]++;
            }
        }
    }
    if(m.empty())cout<<1<<endl;
    else
    {
        ll ans = INT_MIN;
        for(auto i:m)ans = max(ans,i.second);
        cout<<ans<<endl;
    }



}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    // cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
