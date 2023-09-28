/*

*/

///PROBLEM LINK -> https://www.codechef.com/problems/DOTIFYPLAY

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
    ll n,k,l;
    vector<ll>ar;
    cin>>n>>k>>l;
    ll sum =0;
    ll m,li;
    for(ll  i=0; i<n; i++)
    {
        cin>>m>>li;
        if(li==l)ar.push_back(m);
    }
    sort(ar.begin(),ar.end());
    if(ar.size()<k)
    {
        cout<<-1<<endl;
        return;
    }

    else
    {
        ll N = ar.size()-1;
        for(ll i = N; i>N-k; i--)sum+=ar[i];
    }
    cout<<sum<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
