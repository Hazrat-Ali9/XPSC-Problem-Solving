/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/SUMPERM

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
    if(n&1)cout<<-1<<endl;
    else
    {
        vector<ll>ar(n);
        ar[0]=2;
        ar[1]=1;
        if(n<3)
        {
            for(auto i:ar)cout<<i<<" ";
            cout<<endl;
            return;
        }
        for(ll i=2; i<=n; i++)ar[i]=ar[i-2]+2;
        for(auto i:ar)cout<<i<<" ";
        cout<<endl;
        return;
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
