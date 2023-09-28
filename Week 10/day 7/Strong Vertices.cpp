/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1857/problem/D

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

    /*
   ????? ???   ...  au-av = bu-bv
        ?? .........       au - bu >= av -  bv



    */
    ll n;
    cin>>n;
    ll ar1[n];
    ll ar2[n];
    for(ll i=0; i<n; i++)cin>>ar1[i];
    for(ll i=0; i<n; i++)cin>>ar2[i];
    vector<pair<ll,ll>>pos;
    for(ll i=0; i<n; i++)pos.push_back({ar1[i]-ar2[i],i+1});
    sort(pos.begin(),pos.end(),greater<pair<ll,ll>>());
    ll ans=0;
    vector<ll>anS;
    ll mX=pos[0].first;
    for(auto i:pos)
    {
        ll value = i.first;
        ll ind = i.second;
        if(value==mX)
        {
            ans++;
            anS.push_back(ind);
        }
        else break;
    }
    cout<<ans<<endl;
    sort(anS.begin(),anS.end());
    for(auto i:anS)cout<<i<<" ";
    cout<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}