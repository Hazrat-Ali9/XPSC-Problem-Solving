
/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1759/problem/C

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
    ll l,r,x,a1,b1;
    cin>>l>>r>>x>>a1>>b1;
    ll a = min(a1,b1);
    ll  b=max(a1,b1);

    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(b-a>=x)
    {
        cout<<1<<endl;
        return;
    }
    if(r-b>=x)
    {
        cout<<2<<endl;
        return;

    }
    if(a-l>=x)
    {
        cout<<2<<endl;
        return;

    }
    if(r-a>=x && b-l>=x)
    {
        cout<<3<<endl;
        return;

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
