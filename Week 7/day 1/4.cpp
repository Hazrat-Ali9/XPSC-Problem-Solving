/*

*/

///PROBLEM LINK -> https://codeforces.com/problemset/problem/1805/A

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
    vector<ll>ar1(n),ar2(n);
    ll lim = 256;
    for(auto &i:ar1)cin>>i;
    for(ll i=0; i<lim; i++)
    {
        for(ll j=0; j<n; j++)ar2[j]=i^ar1[j];
        for(ll j=1; j<n; j++)ar2[j]=ar2[j-1]^ar2[j];
        if(ar2[n-1]==0)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
