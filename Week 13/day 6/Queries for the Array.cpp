/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1861/problem/C
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
    string s;
    cin>>s;
    int sor=1;
    int unsor=1e9;
    int sz=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')sz++;
        else if(s[i]=='-')
        {
            sz--;
            if(sor>sz)
            {
                sor=sz;
                if(sor<1)sor=1;
            }
            if(unsor!=1e9 && unsor>sz)unsor=1e9;

        }
        else if(s[i]=='1')
        {
            if(unsor<=sz)
            {
                no;
                return;
            }
            sor=sz;
            if(sor<1)sor=1;

        }
        else
        {
            if(sz<2)
            {
                no;
                return;
            }
            if(sor==sz)
            {
                no;
                return;
            }
            unsor=min(sz,unsor);

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
