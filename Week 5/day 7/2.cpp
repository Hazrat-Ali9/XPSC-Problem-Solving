/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1176/problem/B

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
    vector<ll>ar;
    ll ans=0;
    ll x;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(x%3==0)ans++;
        else ar.push_back(x);
    }

    ll m1 =0;
    ll m2 =0;
    for(auto i:ar)
    {
        if(i%3==1)m1++;
        else m2++;
    }

    ll miN = min(m1,m2);
    ll maX = max(m1,m2);
    ans+=miN;
    ans+=(maX-miN)/3;
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
