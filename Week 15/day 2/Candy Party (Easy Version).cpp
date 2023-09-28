/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1869/submission/223556799
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
    vector<ll>ar(n);
    ll sum=0;
    for(auto &i:ar)
    {
        cin>>i;
        sum+=i;
    }
    if  (sum%n!=0)
    {
        no;
        return;
    }
    ll av = sum/n;
    vector<ll>re;
    vector<ll>se;
    for(ll I=0; I<n; I++)
    {
        bool flag = false;
        for(ll i=0; i<=32; i++)
        {
            ll reci = (1<<i);
            for(ll j=0; j<=32; j++)
            {
                ll sen = (1<<j);
                if(ar[I]+reci-sen == av)
                {
                    flag=true;
                    re.push_back(i);
                    se.push_back(j);
                    break;
                }
            }
            if(flag)break;
        }
        if(!flag)
        {
            debug(ar[I],av)
            HERE
            no;
            return;
        }
    }
    debug(re)
    debug(se)
    sort(re.begin(),re.end());
    sort(se.begin(),se.end());
    for(ll i=0;i<re.size();i++)if(re[i]!=se[i]){no;return;}
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
