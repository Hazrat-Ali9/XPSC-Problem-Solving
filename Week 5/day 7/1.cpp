/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1433/problem/C

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
    ll n;
    cin>>n;
    ll maX=0;
    vector<ll>ar(n);
    for(auto &i:ar)
    {
        cin>>i;
        maX=max(i,maX);
    }
    for(ll i=0; i<n; i++)
    {
        if(ar[i]==maX)
        {
            if(i+1<n && ar[i+1]<maX)
            {
                cout<<i+1<<endl;
                return;
            }
            if(i-1>=0 && ar[i-1]<maX)
            {
                cout<<i+1<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}
int main()
{
    Faster ;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
