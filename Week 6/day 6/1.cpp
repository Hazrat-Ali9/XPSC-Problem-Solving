/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/LARGESECOND
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
    ll n,num;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0; i<n; i++)
    {
        cin>>num;
        num*=(-1);
        if(m[num]==0) m[num]=1;
    }
    ll j=0;
    ll ans =0;
    for(auto i:m)
    {
        ans+=i.first*(-1);
        j++;
        if (j==2)break;
    }
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
