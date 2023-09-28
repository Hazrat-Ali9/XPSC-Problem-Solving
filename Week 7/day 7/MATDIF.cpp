/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/MATDIF

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
    ll bor = pow(n,2);
    ll done=0;
    for(ll i=1; i<=bor; i+=2)
    {
flag:
        cout<<i<<" ";
        done++;
        if(done%n==0)cout<<endl;
        if(i==bor-1 && n%2==0)
        {
            i=2;
            goto flag;
        }
        else if(i==bor && n%2==1)
        {
            i=2;
            goto flag;
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
