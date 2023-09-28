/*
*/
///PROBLEM LINK -> https://codeforces.com/problemset/problem/1185/C1
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
    if(n==1)return false;
    if(n&1)
    {
        for(ll i=3; i*i<=n; i++)if(n%i==0)return false;
    }
    else return false;
    return true;
}
void TEST_CASES()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>ar(n);
    priority_queue<ll>pq;
    for(auto &i:ar)cin>>i;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        if(i==0)
        {
            sum+=ar[i];
            pq.push(ar[i]);
            cout<<0<<" ";
        }
        else
        {
            sum+=ar[i];
            if(sum<=m)cout<<0<<" ";
            else
            {
                vector<ll>a;
                while(sum>m)
                {
                    a.push_back(pq.top());
                    pq.pop();
                    sum-=a.back();
                }
                cout<<a.size()<<" ";
                for(auto ele:a)
                {
                    pq.push(ele);
                    sum+=ele;
                }
            }
            pq.push(ar[i]);
        }
    }
    nl;
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
