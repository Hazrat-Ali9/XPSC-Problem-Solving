/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/STRAME

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
ll dp[105];

void solve()
{
    ll x;
    cin>>x;
    string s;
    cin>>s;
   ll z=0;
   ll o =0;
    for(ll i=0; i<x; i++)
    {
        if(s[i]=='1')o++;
        else z++;

    }
    ll m = min(o,z);
    if(m==0)
    {
        cout<<"Ramos\n";
        return;
    }
    if(m&1)cout<<"Zlatan\n";
    else cout<<"Ramos\n";
}
int main()
{
    Faster ;
    for(ll i=0; i<=104; i++)dp[i]=-1;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
