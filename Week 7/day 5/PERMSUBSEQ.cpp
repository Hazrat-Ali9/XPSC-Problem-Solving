/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/PERMSUBSEQ
#include<bits/stdc++.h>
using namespace std;
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
/// vector
    vector<ll>ar(n);
    for(ll i=0; i<n; i++)cin>>ar[i];
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;

/// array
    ll ar1[n];
    sort(ar1, ar1 + n);


}
void solve()
{
    map<ll,ll>m;
    ll n;
    cin>>n;
    ll x;
    for(ll i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        if(x<=2*1e5) m[x]++;
    }
    ll ans=0;
    ll now=1;
    ll fre=1;
    for(auto i:m)
    {
        if(i.first!=now)break;
        ans=( ans+ m[now]*fre)%mod;
        fre=(fre*m[now])%mod;
        now++;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
