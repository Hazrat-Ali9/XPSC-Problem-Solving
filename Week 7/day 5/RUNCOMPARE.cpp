/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/RUNCOMPARE


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
    vector<ll>ar(n);
    for(ll i=0; i<n; i++)cin>>ar[i];
    for(auto &i:ar)cin>>i;
    sort(ar.begin(),ar.end());
    sort(ar.begin(), ar.end(),greater<ll>());

    ll ar1[n];

}
void solve()
{
    ld n,ans=0,bob,now;
    cin>>n;
    vector<ld>al(n);
    for(auto &i:al)cin>>i;
    for(ll i=0; i<n; i++)
    {
        cin>>bob;
        if(al[i]==bob)ans++;
        else if(al[i]<bob)
        {
            now=ceil(bob/al[i]);
            if(now<=2)ans++;
        }
        else if(al[i]>bob)
        {
            now=ceil(al[i]/bob);
            if(now<=2)ans++;

        }
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




