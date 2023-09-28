/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/276/problem/C
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

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end(),greater<ll>());
    vector<ll>ar2(n+1,0);
    vector<pair<ll,ll>>qr;
    for(ll i=0; i<q; i++)
    {
        ll r,l;
        cin>>l>>r;
        ar2[l-1]++;
        ar2[r]--;
        qr.push_back({l,r});
    }
    cout<<endl;
    vector<pair<ll,ll>>ar3;
    for(ll i=0; i<n; i++)ar3.push_back({ar2[i],i});
    for(ll i=1; i<n; i++)ar3[i].first+= ar3[i-1].first;
    sort(ar3.begin(),ar3.end(),greater<pair<ll,ll>>());
    vector<ll> order(n);
    for(ll i=0; i<n; i++)order[ar3[i].second]=ar[i];
    for(ll i=0; i<n; i++)if(i!=0)order[i]+=order[i-1];
    ll sum=0;
    for(auto i:qr)
    {
        ll L=i.first-1;
        ll R=i.second-1;
        ll now =order[R];
        if(L-1>=0)now=order[R]- order[L-1];
        sum+=now;
    }
    cout<<sum<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
