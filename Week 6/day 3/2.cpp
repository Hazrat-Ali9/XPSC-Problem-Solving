/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1005/problem/B

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
    string s1,s2;
    cin>>s1>>s2;
    ll sz1 = s1.size()-1;
    ll sz2 = s2.size()-1;
    ll i = 0;
    while(s1[sz1-i]==s2[sz2-i] && sz1-i>-1 && sz2-i>-1)i++;
    ll ans = sz1+1-i+ sz2+1-i;
    cout<<ans<<endl;

}
int main()
{
    Faster ;
    ll t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
