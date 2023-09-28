/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1066/problem/A

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
    ll L,v,l,r;
    cin>>L>>v>>l>>r;
    if(v==1)
    {
        cout<<l-1+L-r<<endl;
        return;
    }
    ll ans=0;
    ans = (l-1)/v;
    ll r2= (L/v)*v;
    ll l2 = r-(r%v);
    ll def = r2-l2;
    if(r2>r)
        ans+=def/v;
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
