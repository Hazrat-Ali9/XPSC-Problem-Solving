/*

*/

///PROBLEM LINK ->  https://codeforces.com/contest/1454/problem/B

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
    map<ll,ll>m;
    ll n;
    cin>>n;
    ll x;
    ll ind = -1;
    ll ar [n+1];
    for( ll i=1; i<=n; i++)
    {
        cin>>x;
        ar[i]=x;
        m[x]++;
    }

    for(auto i:m)if(i.second == 1)
        {
            for( ll j =1; j<=n; j++)
            {
                if(ar[j]== i.first)
                {
                    ind = j;
                    cout<<ind<<endl;
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
    while(t--)
        solve();
    return 0;
}
