/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/SEATNUMBER

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
    if(x>=1 && x<=10)cout<<"Lower Double\n";
    else if(x>=11 && x<=15)cout<<"Lower Single\n";
    else if(x>=16 && x<=25)cout<<"Upper Double\n";
    else if(x>=26 && x<=30)cout<<"Upper Single\n";


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
