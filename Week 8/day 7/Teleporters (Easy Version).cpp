/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1791/problem/G1
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
void take_from_here()
{
    ll n;
    cin>>n;
/// link list



/// array
    ll ar1[n];
    sort(ar1, ar1 + n);


/// vector
    vector<ll>ar(n);
    for(auto &i:ar)cin>>i;
    for(ll i=0; i<n; i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;
    auto minElement = min_element(ar.begin(), ar.end());
    ll mN= * minElement;

}
void solve()
{
    ll n,c;
    cin>>n>>c;
    vector<ll>ar;
    ll x;
    for(ll i=1; i<=n; i++)
    {
        cin>>x;
        ar.push_back(i+x);
    }
    ll ans=0;
    sort(ar.begin(),ar.end());
    for(auto i:ar)
    {
        if(c-i>=0)
        {
            ans++;
            c-=i;
        }
        else break;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
