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
    unordered_map<ll,int>fre;
    ll ans=-1;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        fre[x]++;
        if(fre[x]>=3)
        {
            ans=x;
        }
    }
//    for(auto i:fre)
//    {
//        cout<<i.first<<" "<<i.second<<endl;
//    }
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
