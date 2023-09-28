/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1015/problem/A

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
    ll n,m;
    cin>>n>>m;
    list<ll>ar;
    for(ll i=1; i<=m; i++)ar.push_back(i);
    ll x1,x2;
    for(ll i=0; i<n; i++)
    {
        cin>>x1>>x2;
        for(ll j=x1; j<=x2; j++)ar.remove(j);
    }
    if(ar.size())
    {
        cout<<ar.size()<<endl;
        for(auto i:ar)cout<<i<<" ";
        cout<<endl;
    }
    else cout<<0<<endl;

}
int main()
{
    Faster ;
    ll t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
