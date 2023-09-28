
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1629/problem/A

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
//.......global.........

void solve()
{
    ll n,k,ans=0;
    cin>>n>>k;
    vector<pair<ll,ll>>ar(n);
    for(auto &i:ar)cin>>i.first;
    for(auto &i:ar)cin>>i.second;
    sort(ar.begin(),ar.end());
    for(ll i=0; i<n; i++)if(k>=ar[i].first)k+=ar[i].second;
    cout<<k<<endl;
}

int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
