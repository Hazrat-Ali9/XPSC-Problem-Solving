
/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1808/problem/A

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
ll luck(ll n)
{
    string s= to_string(n);
    sort(s.begin(),s.end());
    return s.back() - s[0];
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    ll def = r-l;
    if(def<100)
    {
        ll luc =-1;
        ll ans=0;
        for(ll i=l; i<=r; i++)
        {
            if(luck(i)>luc)
            {
                luc = luck(i) ;
                ans=i;
            }
        }
        cout<<ans<<endl;
        return;
    }
    for(ll i=l; i<=l+150; i++)
    {
        if(luck(i)==9)
        {
            cout<<i<<endl;
            return;
        }
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
