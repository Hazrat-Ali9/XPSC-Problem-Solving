/*
*/
///PROBLEM LINK ->https://codeforces.com/problemset/problem/762/A
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
    ll n,k;
    cin>>n>>k;
    vector<ll>ans;
    for(ll i=1;i*i<=n;i++)if(n%i==0){ans.push_back(i);if(i!=n/i)ans.push_back(n/i);}
    sort(ans.begin(),ans.end());debug(ans);
    if(ans.size()<k)cout<<-1<<endl;
    else cout<<ans[k-1]<<endl;
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
