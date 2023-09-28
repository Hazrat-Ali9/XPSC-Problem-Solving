// liink ===https://www.codechef.com/problems/MAXIMSCORE

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
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    ll ans = inf;
    for(ll i =0; i<n; i++)
    {
        if(i==0)
        {
            ans = abs(ar[i]-ar[i+1]);
        }
        else if(i==n-1)
        {
            ll x2 = abs(ar[i]-ar[i-1]);
            ans = min(ans,x2);
        }
        else
        {
            ll x1  = abs(ar[i]-ar[i+1]);
            ll x2 = abs(ar[i]-ar[i-1]);
            ll x = max(x1,x2);
            ans = min(ans,x);
        }
    }
    cout<<ans<<endl;

}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;

}
