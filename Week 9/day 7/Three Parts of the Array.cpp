/*

*/

///PROBLEM LINK -> https://codeforces.com/problemset/problem/1006/C

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
void take_from_here()
{
    ll n;
    cin>>n;
/// link list



/// array
    ll ar1[n];
    sort(ar1, ar1 + n);


/// vector
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    for(ll i=0; i<n; i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;

}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    vector<ll>pre(n);
    vector<ll>sup(n);
    pre[0]=ar[0];
    sup[n-1]=ar[n-1];
    for(ll i=1; i<n; i++)pre[i]=pre[i-1]+ar[i];
    for(ll i=n-2; i>=0; i--)sup[i]=sup[i+1]+ar[i];
   // for(auto i:pre)cout<<i<<" ";
  //  cout<<endl;
  //  for(auto i:sup)cout<<i<<" ";
   // cout<<endl;
    ll ans = 0;
    ll lef = 0;
    ll ri = n-1;
    while(lef<ri)
    {
        if(pre[lef]==sup[ri])
        {
            ans=max(ans,pre[lef]);
            lef++;
            ri--;
        }
        if(pre[lef]<sup[ri])lef++;
        if(pre[lef]>sup[ri])ri--;
        if(lef>=ri)break;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
   // cin>>t;
    while(t--) solve();
    return 0;
}
