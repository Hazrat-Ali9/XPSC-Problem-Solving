/*

*/

///PROBLEM LINK ->  https://atcoder.jp/contests/abc213/tasks/abc213_a?lang=en

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
    ll a,b;
    cin>>a>>b;
    ll    ans = a^b;
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
