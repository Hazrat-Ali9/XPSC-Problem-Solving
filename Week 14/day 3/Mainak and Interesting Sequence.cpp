/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1726/submission/222045710
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
    int n,sum;
    cin>>n>>sum;
    if(sum<n)
    {
        no;
        return;
    }
    else
    {
        if(sum%n==0)
        {
            HERE
            yes;
            for(int i=1; i<=n; i++)cout<<sum/n<<" ";
            cout<<endl;
            return;
        }
        else
        {
            if(n&1)
            {
                HERE
                yes;
                cout<<sum-n+1<<" ";
                for(int i=2; i<=n; i++)cout<<1<<" ";
                cout<<endl;
                return;
            }
            else
            {
                if(sum%2==0)
                {
                    HERE
                    yes;
                    int va = sum-n+2;
                    cout<<va/2<<" ";
                    cout<<va/2<<" ";
                    for(int i=3; i<=n; i++)cout<<1<<" ";
                    cout<<endl;
                    return;
                }
            }
        }
    }
    no;
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
