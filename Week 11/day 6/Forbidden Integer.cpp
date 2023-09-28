/*
*/
///PROBLEM LINK -> https://codeforces.com/contest/1845/submission/219940281
#include<bits/stdc++.h>
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
void ASHIK_ASLAM()
{
    ll n,k,x;
    cin>>n>>k>>x;
    if(k==1)
    {
        no;
        return;
    }
    if(x!=1)
    {
        yes;
        cout<<n;
        nl;
        for(ll i=1; i<=n; i++)cout<<1 sp;
        nl;
        return;
    }
    if((n&1)&& x == 1 & k<3)
    {
        no;
        return;
    }
    if(x==1)
    {
        if(n&1)
        {
            yes;
            cout<<(n-3)/2 + 1;
            nl;
            ll ned = n -  3;
            cout<<3 sp;
            for(ll i=1; i<=ned/2; i++)cout<<2 sp;
            nl;
            return;
        }
        yes;
        cout<<n/2;
        nl;
        for(ll i=1; i<=n/2; i++)cout<<2 sp;
        nl;

    }

}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) ASHIK_ASLAM();
    return 0;
}
