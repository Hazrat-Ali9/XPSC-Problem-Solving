/*

*/

///PROBLEM LINK -> https://codeforces.com/contest/1742/problem/E

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
ll dp[105];

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>ar(n+1);
    ar[0]=0;
    for(ll i=1; i<=n; i++)cin>>ar[i];
    vector<ll>ans(q+1);
    ans[0]=0;
    vector<pair<ll,ll>>q_ar;
    ll q1;
    for(ll i=1; i<=q; i++)
    {
        cin>>q1;
        q_ar.push_back({q1,i});
    }
    sort(q_ar.begin(),q_ar.end());
    ll indx=0;
    ll now_len = 0;
    ll sum =0;
    for(auto i:q_ar)
    {
        ll ind = i.second;
        ll leg = i.first;
        if(leg>=now_len && indx<=n)
        {
            sum+=ar[indx];
            indx++;
            now_len=ar[indx];

            while(indx<=n && leg>=now_len)
            {
                sum+=ar[indx];
                indx++;
                now_len=ar[indx];
            }
            ans[ind]=sum;
        }
        else ans[ind]=sum;

    }
    for(ll i =1; i<=q; i++)cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
    Faster ;
    for(ll i=0; i<=104; i++)dp[i]=-1;
    ll t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}
