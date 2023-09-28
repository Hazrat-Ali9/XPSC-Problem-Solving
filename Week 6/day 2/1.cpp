/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/PARKINGCHARG

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
ll dp[105];

void solve()
{
    ll x,y,h;
    cin>>x>>y>>h;
    ll ans =0;
    if (h<1)
    {
        cout<<0<<endl;
        return;
    }
    if(h==1)ans = x;
    else
    {
        ans+=x;
        ans+= y*(h-1);
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    for(ll i=0; i<=104; i++)dp[i]=-1;
    ll t = 1;
   //// cin>>t;
    while(t--) solve();
    return 0;
}
