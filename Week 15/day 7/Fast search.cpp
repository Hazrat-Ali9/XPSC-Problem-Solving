/*
*/
///PROBLEM LINK -> https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
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
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    debug(ar);
    ll q;
    cin>>q;
    vector<ll>ans;
    for(ll i=0; i<q; i++)
    {
        ll low,hig;
        cin>>low>>hig;
        if(low>ar.back())ans.push_back(0);
        else
        {
            ll ind1,ind2;
            vector<ll>::iterator ii = lower_bound(ar.begin(),ar.end(),low);
            ind1 =ii  -  ar.begin();
            ii = upper_bound(ar.begin(),ar.end(),hig);
            ind2 =ii  -  ar.begin();
            ans.push_back(ind2-ind1);
        }
    }
    for(auto i:ans)cout<<i<<" ";
}
int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    //cin>>t;
    while(t--)TEST_CASES();
    return 0;
}
