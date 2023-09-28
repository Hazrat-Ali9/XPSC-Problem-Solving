/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/BETDEAL

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
    ll f,s;
    cin>>f>>s;
    ll p1 = 100 - f;
    ll p2 = 200 - 2*s;
    if(p1==p2)cout<<"BOTH"<<endl;
    if(p1<p2)cout<<"FIRST"<<endl;
    if(p1>p2)cout<<"SECOND"<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}




