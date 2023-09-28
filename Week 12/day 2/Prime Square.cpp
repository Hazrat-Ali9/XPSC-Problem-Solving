/*
*/
///PROBLEM LINK ->  https://codeforces.com/problemset/problem/1436/B
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
    ll ar[n][n];

    for(ll i=0; i<n; i++)for(ll j=0; j<n; j++)ar[i][j]=0;
    ll y=0;
    for(ll i=0,y=0,Y=n-1; i<n/2; i++,y++,Y--)
    {
        ar[i][y]=1;
        ar[i][Y]=1;
    }
    for(ll i=n/2,y=n/2 - 1,Y=n/2; i<n; i++,y--,Y++)
    {
        ar[i][y]=1;
        ar[i][Y]=1;
    }
    if(n%2==0)
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)cout<<ar[i][j]<<" ";
            nl;
        }
    }
    else
    {
        for(ll i=0; i<n; i++)for(ll j=0; j<n; j++)ar[i][j]=0;
        for(ll i=0,y=0,Y=n-1; i<=n/2; i++,y++,Y--)
        {
            ar[i][y]=1;
            ar[i][Y]=1;
        }
        for(ll i=n/2 + 1 ,y=n/2 - 1,Y=n/2 + 1; i<n; i++,y--,Y++)
        {
            ar[i][y]=1;
            ar[i][Y]=1;
        }



        ll x = n/2 ;
        ll y = n/2 ;
        ar[x][y+1]=1;
        ar[x][y-1]=1;
        ar[x-1][y]=1;
        ar[x+1][y]=1;
        ar[x-1][y-1]=1;
        ar[x-1][y+1]=1;
        ar[x+1][y-1]=1;
        ar[x+1][y+1]=1;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)cout<<ar[i][j]<<" ";
            nl;
        }
    }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
