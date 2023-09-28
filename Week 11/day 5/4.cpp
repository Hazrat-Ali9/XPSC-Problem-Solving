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
#define nl cout<<endl
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const double PI =  3.1415926535897932384626433832795;
//.......global.........
bool cmp(pair<ll,ll>x,pair<ll,ll>y)
{
    if(x.first==y.first)return x.second<y.second;
    return x.first>y.first;
}
void ASHIK_ASLAM()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>ar;
    vector<ll>zero;
    vector<pair<ll,ll>>not_zero;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        ll now = x%k;
        if(now==0)zero.push_back(i);
        else not_zero.push_back({now,i});
    }
    sort(zero.begin(),zero.end());
    sort(not_zero.begin(),not_zero.end(),cmp);
    for(auto i:zero)cout<<i<<" ";
    for(auto i:not_zero)cout<<i.second<<" ";
    nl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) ASHIK_ASLAM();
    return 0;
}