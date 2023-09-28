/*
*/
///PROBLEM LINK ->
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
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
void ASHIK_ASLAM()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b)cout<<"First\n";
    else if (a<b)cout<<"Second\n";
    else
    {
        if(c&1)cout<<"First\n";
        else cout<<"Second\n";
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