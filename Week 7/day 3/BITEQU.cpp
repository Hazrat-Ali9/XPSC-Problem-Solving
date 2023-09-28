/*

*/

///PROBLEM LINK ->

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
void take_from_here()
{
    ll n;
    cin>>n;
    vector<ll>ar(n);
    for(ll i=0; i<n; i++)cin>>ar[i];
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());

    ll ar1[n];

}

void solve()
{
    ll n;
    cin>>n;

    if(n == 0)cout<<1<<" "<<3<<" "<<8<<" "<<9<<"\n";
    else
    {
        ll a=1,b=2,c=0,d=0;
        for(ll i=3; i<=1e8; i++)
        {
            ll now = n^i;
            if(now<=2 ||  now==i)continue;
            c=i;
            d=now;
            break;

        }
        if(c==0)
            cout<<-1;
        else cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }

}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}




