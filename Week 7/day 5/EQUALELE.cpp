/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/EQUALELE


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
void take_from_here()
{
    ll n;
    cin>>n;
/// vector
    vector<ll>ar(n);
    for(ll i=0; i<n; i++)cin>>ar[i];
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());
    auto maxElement = max_element(ar.begin(), ar.end());
    ll mX= * maxElement;

/// array
    ll ar1[n];
    sort(ar1, ar1 + n);


}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>fre(2*1e5 + 10,0);
    ll x;
    for(ll i=1; i<=n; i++)
    {
        cin>>x;
        fre[x]++;
    }
    auto maxElement = max_element(fre.begin(), fre.end());
    ll mX= * maxElement;
    cout<<n-mX<<endl;


}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}




