/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/MAKE_AB_SAME

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

}

void solve()
{
    ll n;
    cin>>n;
    ll ar1[n];
    ll ar2[n];
    ll one1=0;
    ll one2=0;
    for(ll i=0; i<n; i++)
    {
        cin>>ar1[i];
        if(ar1[i]==1)one1=1;
    }
    for(ll i=0; i<n; i++)
    {
        cin>>ar2[i];
        if(ar2[i]==1)one2=1;
    }
    if(ar1[0]!=ar2[0] || ar1[n-1]!=ar2[n-1])
    {
        no;
        return;
    }
    if(one1 != one2)
    {
        no;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        if(ar1[i]!=ar2[i] && ar1[i]==1)
        {
            no;
            return;
        }
    }
    yes;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
