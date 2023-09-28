/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/845/problem/C
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
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0; i<n; i++)
    {
        ll l;
        ll r;
        cin>>l>>r;
        m[l]++;
        m[r+1]--;
    }
    ll sum=0;
    ll mX=-1;
    for(auto i:m)
    {
        sum+=i.second;
        mX=max(sum,mX);
    }
    if(mX<=2)yes;
    else no;

}
int main()
{
    Faster ;
    ll t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
