/*

*/

///PROBLEM LINK ->   https://codeforces.com/contest/1714/problem/B

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
    vector<ll>ar;
    int n;
    cin>>n;
    queue<ll>q;
    map<ll,ll>m;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        q.push(x);
        m[x]++;
        ar.push_back(x);

    }
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        if(m[ar[i]]<2)continue;
        else
        {
            while(m[ar[i]]>1)
            {
                m[q.front()]--;
                q.pop();
                ans++;
            }
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