/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1610/B
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
bool check(int num,vector<int>ar)
{
    vector<int>ar1;
    vector<int>ar2;
    for(auto i:ar)
    {
        if(i!=num)
        {
            ar1.push_back(i);
            ar2.push_back(i);
        }
    }
    reverse(ar2.begin(),ar2.end());
    debug(ar1)
    debug(ar2)
    debug(ar1==ar2)
    if(ar1==ar2)return true;
    return false;
}
void TEST_CASES()
{
    ll n;
    cin>>n;
    vector<int>ar(n);
    for(auto &i:ar)cin>>i;
    int l=0,r=n-1;
    while(l<r)
    {
        if(ar[l]==ar[r])
        {
            l++;
            r--;
        }
        else
        {
            bool  flag = (check(ar[l],ar)||check(ar[r],ar));
            if(flag)yes;
            else no;
            return;
        }

    }
    yes;

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
