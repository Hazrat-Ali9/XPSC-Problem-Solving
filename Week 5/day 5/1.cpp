/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1742/problem/D

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
ll co_prime[1001][1001];
void coprime_finder()
{
    ll n=1000;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            co_prime[i][j]=__gcd(i,j);
        }
    }
}
void solve()
{
    ll n;
    cin>>n;
    unordered_map<ll,ll>m;
    ll ar[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        m[ar[i]]=1+i;
    }
    ll ans = -1;
    for(ll i=1; i<1000; i++)
    {
        for(ll j=1; j<=1000; j++)
        {
            if(m[i]!=0 &&  m[j]!=0 && co_prime[i][j]==1)
            {
                ll now_sum = m[i] + m[j];
                ans= max(now_sum,ans);
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    coprime_finder();
    ll t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}
