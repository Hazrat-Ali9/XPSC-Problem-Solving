
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1118/problem/B

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
    ll ans=0;
    ll ar[n+1];
    ll ev=0;
    ll od=0;
    for(ll i=1; i<=n; i++)cin>>ar[i];
    ll pre_ev[n+1];
    ll pre_od[n+1];
    pre_ev[2]=ar[2];
    pre_ev[0]=0;
    pre_ev[1]=0;
    if(n>=4)
        for(ll i=4; i<=n; i+=2)pre_ev[i]=ar[i]+pre_ev[i-2];
    for(ll i=1; i<=n; i++)if(i%2==1)pre_ev[i]=pre_ev[i-1];
    pre_od[1]=ar[1];
    pre_ev[0]=0;
    if(n>=3)
        for(ll i=3; i<=n; i+=2)pre_od[i]=ar[i]+pre_od[i-2];
    for(ll i=2; i<=n; i++)if(i%2==0)pre_od[i]=pre_od[i-1];
    ll ev_sum = pre_ev[n];
    ll od_sum=pre_od[n];
    ll total_sum = ev_sum+od_sum;
    for(ll i=1; i<=n; i++)
    {
        ll tempsum= total_sum-ar[i];
        if(tempsum%2!=0)continue;
        ll need = tempsum/2;
        ll pe = pre_ev[i-1];
        ll poso = od_sum -pre_od[i];
        if(pe+poso==need)ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    solve();
    return 0;
}
