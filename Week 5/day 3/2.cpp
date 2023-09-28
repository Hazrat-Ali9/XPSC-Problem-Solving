
/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1213/problem/B

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
    ll n,ans=0;
    cin>>n;
    vector<ll>ar(n);
    vector<ll>miN(n);
    for(auto &i:ar)cin>>i;
    miN[n-1]=ar[n-1];
    for(ll i=n-2; i>=0; i--)miN[i] = min(ar[i],miN[i+1]);
    for(ll i=0; i<n; i++)if(ar[i]>miN[i])ans++;
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
