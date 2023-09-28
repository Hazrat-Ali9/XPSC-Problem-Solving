/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1675/problem/B

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
    for(auto &x:ar)cin>>x;
    if(ar.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    if(ar.back()==0)
    {
        cout<<-1<<endl;
        return;
    }

    ll ans=0;
    for(ll i=n-2; i>=0; i--)
    {
        while(ar[i]!=0 && ar[i]>=ar[i+1])
        {
            ar[i]/=2;
            ans++;
        }
        if( ar[i]==0 && i>0)
        {
            ans=-1;
            break;
        }
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
