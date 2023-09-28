/*

*/

///PROBLEM LINK -> https://cses.fi/problemset/task/1619
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
    int n;
    cin>>n;
    map<ll,ll>m;
    int mX=-1;
    ll ans=0;
    int a,b;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        mX = max(mX,a);
        m[a]++;
        m[b+1]--;
    }
//   cout<<endl;
    // for(int i=1; i<=mX; i++)cout<<i<<" "<<m[i]<<endl;
    ll sum=0;
    for(auto i:m)
    {
        sum+=i.second;
        ans=max(ans,sum);
    }
    // cout<<endl;
    // for(int i=1; i<=mX; i++)cout<<i<<" "<<m[i]<<endl;
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
