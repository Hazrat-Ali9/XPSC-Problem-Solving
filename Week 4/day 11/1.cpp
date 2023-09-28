/*

*/
///PROBLEM LINK ->  https://codeforces.com/contest/1674/problem/A
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
bool root_n(ll n,ll x)
{
    ld x1=x;
    ll root = pow(n,1.0/x);
    ll sum =1;
    for(ll i=1; i<=x; i++)sum*=root;
    return  sum==n;
}
void solve()
{
    ll x,y;
    cin>>x>>y;

    if(y%x==0)
    {
        cout<<1<<" "<<y/x<<endl;
    }
    else
        cout<<0<<" "<<0<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
