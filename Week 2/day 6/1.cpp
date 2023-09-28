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
int main()
{
    Faster ;
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    ll q;
    cin>>q;
    for(ll i=1; i<=q; i++)
    {
        ll x,y;
        cin>>x>>y;
        ll sum=0;
        for(int j=x; j<=y; j++)sum+=a[j];
        cout<<sum<<endl;
    }
    return 0;
}
