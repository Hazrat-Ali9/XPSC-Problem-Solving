/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1602/problem/B

#include<bits/stdc++.h>
using namespace std;
// this  5 lines   policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//......... macros.........
#define ull  unsigned long long
#define ll long long
#define ld double
#define pii pair<int,int>
#define F first
#define S  second
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define nl cout<<"\n"
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
// ........ constant.......
const ll inf=1e18;
const ll mod = 1000000007;
const ld PI =  3.1415926535897932384626433832795;
//.......global.........

void solve()
{
    ll fre[2001]= {0};
    ll n;
    cin>>n;
    vector<ll>ar(n);
    vector<vector<ll>>ans;
    for(auto &i:ar)cin>>i;
    for(auto i:ar)fre[i]++;
    ans.push_back(ar);
    for(ll i=1; i<=n; i++)
    {
        for(ll ii=0; ii<n; ii++)ar[ii]=fre[ar[ii]];
        for(ll j=1; j<=2000; j++)fre[j]=0;
        for(auto ii:ar)fre[ii]++;
        ans.push_back(ar);
    }
    ll q,x,k;
    cin>>q;
    for(ll i=0; i<q; i++)
    {
        cin>>x>>k;
        if(k>=n)cout<<ans.back()[x-1];
        else cout<<ans[k][x-1];
        cout<<endl;
    }
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)solve();
    return 0;
}
